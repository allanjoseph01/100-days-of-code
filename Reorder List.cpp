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
    void reorderList(ListNode* head) {
        ListNode* trev=head;
        int i=0;
        while(trev){
            i+=1;
            trev=trev->next;
        }
        int mid;
        if(i%2==0){
            mid=i/2;
        }else{
            mid=i/2 + 1;
        }
        ListNode* trev2=head;
        for(int j=0;j<mid-1;j++){
            trev2=trev2->next;
        }
        ListNode* trev3=trev2->next;
        trev2->next=nullptr;
        ListNode* prev=nullptr;
        ListNode* current=trev3;
        while(current!=nullptr){
            ListNode* nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        ListNode* l1=head;
        ListNode* l2=prev;
        while(l1!=nullptr && l2!=nullptr){
            ListNode* l1p=l1->next;
            ListNode* l2p=l2->next;
            l1->next=l2;
            l2->next=l1p;
            l1=l1p;
            l2=l2p;
        }
    }
};