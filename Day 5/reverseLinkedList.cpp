class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //Base case (if node is empty or only single node)
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        // Rest of the LL (recursively solved)
        ListNode* rest= reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
        
    }
};
