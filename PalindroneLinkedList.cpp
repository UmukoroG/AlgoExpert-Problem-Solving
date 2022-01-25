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
    bool isPalindrome(ListNode* head) {
        
        ListNode *slow=head;
        ListNode *fast=head;
        
        //reach the end of the LL using f pointer
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        // 1->2->2->1-> null gives 1->2<-2<-1
        //reverse second half of LL
        ListNode *prev=NULL;
        while(slow){
            ListNode *tmp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=tmp;
        }
        
        //check palindrone
        ListNode *left=head; 
        ListNode *right=prev;
        while(right){
            if(left->val!=right->val){
                return false;
            }
            left=left->next;
            right=right->next;
        }
        return true;    
        
        
        //Method 1 - using an extra space
//         vector<int> v;
        
//         while(head){
//             v.push_back(head->val);
//             head=head->next;
//         }
        
//         int l=0; 
//         int r=v.size()-1;
//         while(l<=r){
//             if(v[l]!=v[r]){
//                 return false;
//             }
//             l++;
//             r--;
//         }
//         return true;
        
    }
};