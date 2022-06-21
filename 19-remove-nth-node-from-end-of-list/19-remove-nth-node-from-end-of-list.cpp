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
    int countNode(ListNode* head){
        int cnt = 0;
        while(head){
            cnt++;
            head = head->next;
        }
        
        return cnt;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int total = countNode(head);
        if(total == n) return head->next;
        int k = total - n ;
        
        ListNode* ptr = head;
        while(k-1){
            ptr = ptr->next;
            k--;
        }
        
        ptr->next = ptr->next->next;
        
        return head;
    }
};