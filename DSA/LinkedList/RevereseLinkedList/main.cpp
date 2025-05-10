class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* curr = head ; 
            ListNode* prev = nullptr ;
    
            while (curr != nullptr) {
                ListNode* nextNode = curr->next ;
                curr->next = prev ; 
                prev = curr ; 
                curr = nextNode ;
            }
    
            return prev ;
        }
    };

// prev is brought to the last and next is behind it, prev becomes the new head