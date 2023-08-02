class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode();
        ListNode* curr = dummyHead;
        int carry =0;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int sum =0;
            if(l1!= NULL)
            {
                sum=sum+l1->val;
                l1= l1->next;
            }
            if(l2 != NULL)
            {
                sum = sum+ l2->val;
                l2 = l2-> next;
            }
            sum += carry;
            carry = sum/10;
            int curr_digit= sum%10;
            ListNode* newNode = new ListNode(curr_digit);
            curr -> next = newNode;
            curr = curr->next;
        }
        return dummyHead-> next;
    }
};
