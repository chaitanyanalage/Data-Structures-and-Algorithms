/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        ListNode* temp = head;
        int availableCnt = 0;

        while(temp != NULL && availableCnt < k) {
            temp = temp -> next;
            availableCnt++;
        }

        if(availableCnt < k) {
            return head;
        }


        // if(head == NULL) {
        //     return NULL;
        // }

        //step 1: reverse first K nodes
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;

        while(curr != NULL && count < k) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        //step 2: recursion will do the work
        if(next != NULL) {
            head -> next = reverseKGroup(next, k);
        } 

        //step 3: return head of reversed list
        return prev;
    }
};