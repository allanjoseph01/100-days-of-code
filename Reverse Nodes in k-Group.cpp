//Definition for singly-linked list.
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; 
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* si=head;
        int i=0;
        while(si!=nullptr){
            i+=1;
            si=si->next;
        }
        int no=i/k;
        ListNode* trev=head;
        ListNode* trev2=nullptr;
        ListNode* ans=trev2;
        while(no>0){
            stack<ListNode*>curr;
            int i=0;
            while(i<k){
                curr.push(trev);
                trev=trev->next;
                i+=1;
            }
            no--;
            while(!curr.empty()){
                if(ans!=nullptr){
                    trev2->next=curr.top();
                    trev2=trev2->next;
                    trev2->next=nullptr;
                    curr.pop();
                }else{
                    ans=curr.top();
                    trev2=ans;
                    trev2->next=nullptr;
                    curr.pop();
                }
            }
        }
        trev2->next=trev;
        return ans;
    }
};