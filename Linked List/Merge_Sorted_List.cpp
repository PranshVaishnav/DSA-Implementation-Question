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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
          ListNode *first = NULL;
        ListNode *last = NULL;
        // Edge Case Null Linked List;

        if (head1 == 0)
        {
            return head2;
        }
        if (head2 == 0)
        {
            return head1;
        }

        // Choose the first index for beginning

        if (head1->val < head2->val)
        {
            first = head1;
            last = head1;
            head1 = head1->next;
        }
        else
        {
            first = head2;
            last = head2;
            head2 = head2->next;
        }

        while (head1!= NULL and head2!= NULL)
        {
            if (head1->val < head2->val)
            {
                last->next = head1;
                last = head1;
                head1 = head1->next;
            }
            else
            {
                last->next = head2;
                last = head2;
                head2 = head2->next;
            }
        }

        while (head1 != 0 and head2 == 0)
        {
            last->next = head1;
            last = head1;
            head1 = head1->next;
        }
        while (head2 != 0 and head1 == 0)
        {
            last->next = head2;
            last = head2;
            head2 = head2->next;
        }
        return first;
    }
};