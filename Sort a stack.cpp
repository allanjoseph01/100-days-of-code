//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //My code starts here
    stack<int>ans;
    stack<int>temp;
    stack<int>q=this->s;
    if(!q.empty()){
        ans.push(q.top());
        q.pop();
    }
    while(!q.empty()){
        if(ans.top()<=q.top()){
           ans.push(q.top());
           q.pop();
        }else{
            while(!ans.empty() && ans.top()>q.top()){
               temp.push(ans.top());
               ans.pop();
            }
            ans.push(q.top());
            q.pop();
            while(!temp.empty()){
               ans.push(temp.top());
               temp.pop();
            }
        }
    }
    this->s=ans;
}