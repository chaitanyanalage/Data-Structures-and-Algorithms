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
    int getLength(ListNode* head) {
        int len = 0;
        while(head != NULL) {
            len++;
            head = head -> next;
        }
        return len;
    }

    ListNode* getMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL) {
            return head;
        }

        if(head -> next -> next == NULL) {
            return head -> next;
        }

        ListNode* slow = head;
        ListNode* fast = head -> next;

        while(fast != NULL) {
            fast = fast -> next;
            if(fast != NULL) {
                fast = fast -> next;
            }

            slow = slow -> next;
        }
        return slow;
    }

    ListNode* middleNode(ListNode* head) {
        // int len = getLength(head);
        // int ans = (len/2);
        
        // ListNode* temp = head;
        // while(ans--) {
        //     temp = temp -> next;
        // }
        // return temp;

        return getMiddle(head);
        
    }
};