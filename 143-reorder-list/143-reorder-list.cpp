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
private:
    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next ;
        }
        
        return slow;
    }
    
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head-> next== NULL) return head;
        
        ListNode * newNode = reverseList(head->next);
        ListNode* next = head->next;
        next->next = head;
        head->next = NULL;
        
        return newNode;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* middle = middleNode(head);
        ListNode* ptr2 = reverseList(middle->next);
        middle->next = NULL;
        ListNode* ptr = head; 
        
        while(head && ptr2){
            ListNode* temp1 = ptr->next;
            ptr->next = ptr2;
            ptr = temp1;
            ListNode* temp2 = ptr2->next;
            ptr2->next = ptr;
            ptr2 = temp2;
        }
        
        
    }
};