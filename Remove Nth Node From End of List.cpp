#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* len=head;
        int i=0;
        while(len!=nullptr){
            len=len->next;
            i++;
        }
        int count=i-n;
        ListNode* ans=head;
        if(count==0){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        for(int j=0;j<count-1;j++){
            ans=ans->next;
        }
        ans->next = ans->next->next;
        return head;
    }
};