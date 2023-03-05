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
      set<ListNode*> s1;
      ListNode * temp=head;
      while(temp!=NULL)
      {
          auto result = s1.insert(temp);//here we inserting address bcz address are unqiue
          //we should not insert val for this bcz values can be duplicated here the problem 
          //is cycle formation.
          if(result.second==false)
          return temp;
          temp=temp->next;
      }
      return NULL;
    }
};
