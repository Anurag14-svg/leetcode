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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode *preNode = new ListNode();
        ListNode p(0), *preNode = &p;
        int carry = 0;
        while(l1 != NULL && l2 != NULL){
            int current = l1->val + l2->val + carry;
            carry = current / 10;
            current = current % 10;
            ListNode * newNode = new ListNode(current);
            preNode->next = newNode;
            preNode = preNode->next;
            l1 = l1->next;
            l2 = l2->next;
            
        }
        
        while(l1 != NULL){
            int current = l1->val + carry;
            carry = current / 10;
            current = current % 10;
            ListNode * newNode = new ListNode(current);
            preNode->next = newNode;
            preNode = preNode->next;
            l1 = l1->next;
        }
        
        while(l2 != NULL){
            int current = l2->val + carry;
            carry = current / 10;
            current = current % 10;
            ListNode * newNode = new ListNode(current);
            preNode->next = newNode;
            preNode = preNode->next;
            l2 = l2->next;
        }
        
        if(carry != 0){
            ListNode * newNode = new ListNode(carry);
            preNode->next = newNode;
            preNode = preNode->next;
        }
        
        return p.next;
        
        
    }
};