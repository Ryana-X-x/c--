class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0) ; 
        ListNode* merge = dummy ;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                merge->next = list1 ;
                list1 = list1->next ;
            } else {
                merge->next = list2 ;
                list2 = list2->next ;
            }
            merge = merge->next ;
        }
        
        if (list1 != nullptr) {
            merge->next = list1 ;
        } else {
            merge->next = list2 ;
        }

        return dummy->next ;
    }
};