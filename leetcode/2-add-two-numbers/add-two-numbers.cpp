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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ansHead = nullptr;
        ListNode* ansTail = nullptr;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = 0;
            if (l1 != nullptr) {
                val1 = l1->val;
                l1 = l1->next;
            }

            int val2 = 0;
            if (l2 != nullptr) {
                val2 = l2->val;
                l2 = l2->next;
            }

            int sum = carry + val1 + val2;
            int digit = sum % 10;

            // Create a new node and add it to the answer linked list
            ListNode* newNode = new ListNode(digit);
            if (ansHead == nullptr) {
                ansHead = newNode;
                ansTail = newNode;
            } else {
                ansTail->next = newNode;
                ansTail = newNode;
            }

            carry = sum / 10;
        }

        return ansHead;
    }
};