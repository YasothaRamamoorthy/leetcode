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
int getLength(ListNode *head){

    int length =0;

    while(head != NULL){

        head = head->next;

        length++;

    }

    return length;

}

//going to the nth node from last by sizeofthelinkedlist - nthnode
//removing that nth node and replace nth nodes prevs->next position with nth nodes next position
//conercase -- if size is 0 no need too work
//nth node must be lessthan totalsize
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = getLength(head);
        ListNode* head1 = head;
        if(size==0)
        return head1 = NULL;
        else
        {
            ListNode* prev = NULL;
            int node = size-n;
            if(node==0)
            {
                head = NULL;
            }
            else
            {
            while(node!=0 && head1)
            {
                prev=head1;
                head1=head1->next;
                node--;
            }
            //cout<<prev->val;
            //cout<<head1->val;
            prev->next = head1->next;
            
            }
        }

        return head;
    }

};
