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
    ListNode* insertionSortList(ListNode* head) {
       ListNode* sortedlist= new ListNode();
       ListNode* unsortedlist= head;

        while(unsortedlist!=NULL)
        {
            ListNode* prev= sortedlist;

            while(prev->next != NULL && prev->next->val <= unsortedlist->val)
            {
                prev=prev->next;
            }
            ListNode* next = unsortedlist->next;

            unsortedlist->next=prev->next;
            prev->next = unsortedlist;

            unsortedlist= next;
        }
        return sortedlist->next;
    }
};
