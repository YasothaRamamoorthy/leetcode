/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 long long int reverse_digit(long long int digit)
 {
     long long int rem,result=0;
     while(digit)
     {
         rem= digit%10;
         result = result + rem*10; 
     }
     return result;
 }


 long long int digit1=0,digit2 =0;
      ListNode * start_l1=l1;
      ListNode * start_l2=l2;
      while(start_l1)
      {
        digit1 = start_l1->val + digit1*10;
        start_l1=start_l1->next;
      } 
      while(start_l2)
      {
        digit2 = start_l2->val + digit2*10;
        start_l2=start_l2->next;
      }  
      cout<<reverse_digit(digit1)<<endl;
      cout<<reverse_digit(digit2);
      return NULL;
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * result = new ListNode(0);
        ListNode * curr = result;
        int carry =0;
        while(l1 || l2 || carry)
        {
            int x = l1 ? l1->val:0;
            int y = l2 ? l2->val:0;
           int sum = x+y+carry; 
           carry = sum/10;
           //creating newnode and inserting the sum value
           curr->next = new ListNode(sum%10);
           curr = curr->next;
            l1=l1 ?l1->next:NULL;
            l2=l2 ?l2->next:NULL;
        }
        return result->next;
    }
};
