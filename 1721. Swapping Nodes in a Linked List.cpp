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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *s1, *s2;
        for(ListNode *i = head; i != nullptr; i = i->next){
            
            if(s2!= nullptr)
            s2 = s2->next;

            if(--k == 0){
                s1 = i;
                s2 = head;
            }
        }
        swap(s1->val, s2->val);
        return head;
    }
};