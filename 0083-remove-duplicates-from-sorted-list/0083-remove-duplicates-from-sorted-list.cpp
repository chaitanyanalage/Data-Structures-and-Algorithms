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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) {
            return NULL;
        } 

        ListNode* current = head;

        while(current != NULL && current -> next != NULL) {
            if(current -> val == current -> next -> val) {
                ListNode* nextNext = current -> next -> next;
                ListNode* nodeToDelete = current -> next;
                delete(nodeToDelete);
                current -> next = nextNext;
            }
            else {
                current = current -> next;
            }
        }
        return head;
    }
};