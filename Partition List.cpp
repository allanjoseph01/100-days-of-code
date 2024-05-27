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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* ans=nullptr;
        ListNode* smtrev=ans;
        ListNode* big=nullptr;
        ListNode* bgtrev=big;
        while(head!=nullptr){
            if(head->val<x){
                if(ans==nullptr){
                    ans=new ListNode(head->val);
                    smtrev=ans;
                }else{
                    smtrev->next=new ListNode(head->val);
                    smtrev=smtrev->next;
                }
            }else{
                if(big==nullptr){
                    big=new ListNode(head->val);
                    bgtrev=big;
                }else{
                    bgtrev->next=new ListNode(head->val);
                    bgtrev=bgtrev->next;
                }
            }
            head=head->next;
        }
        if(ans==nullptr){
            return big;
        }
        smtrev->next=big;
        return ans;
    }
};