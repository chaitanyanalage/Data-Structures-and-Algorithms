/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return NULL;  // No cycle possible
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Detect if there is a cycle using slow and fast pointers
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // Cycle detected
            if (slow == fast) {
                break;
            }
        }

        // If no cycle is detected
        if (fast == NULL || fast->next == NULL) {
            return NULL;  // No cycle
        }

        // Find the starting point of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // Return the node where the cycle starts
        return slow;
    }
};
