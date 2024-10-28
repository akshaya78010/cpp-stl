#include<iostream>
#include<stack>
#include<deque>
#include<queue>
using namespace std;
//--------------------------------------------------------------------------------------------------
/*int main()
{
	stack<int>st;
	for(int i = 0 ; i <= 10 ; i++)
	{
		st.push(i);
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	cout<<st.size();
}*/
//-------------------------------------------------------------------------------------------------------
/*
int main()
{
	queue<int>q;
for(int i = 1; i <= 10 ; i++)
{
	q.push(i);
}
cout<<q.size()<<endl;
cout<<q.front()<<endl<<q.back()<<" ";
cout<<endl;
while(!q.empty())
{
	cout<<q.front()<<" ";
	q.pop();
}
cout<<endl<<q.size();
}*/
//---------------------------------------------------------------------------------------------------------
/*
int main()
{
	priority_queue<int>pq;
	for(int i = 1 ; i <= 10 ; i++)
	{
		pq.push(i);
	}
	cout<<pq.size()<<endl;
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
}*/
//------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
int main()
{
	deque<int>dq;
	for(int i = 1 ; i<= 10 ; i++)
	{
		dq.push_front(i);
	}
	cout<<dq.size()<<endl;
	cout<<dq.at(3)<<endl;
	while(!dq.empty())
	{
		cout<<dq.front()<<" ";
		dq.pop_front();
	}
}*/
//------------------------------------------------------------------------------------------------
#include<iostream>
#include<queue>
using namespace std;
int main()
{
  //priority_queue<int,vector<int>,greater<int>>min_heap;
    priority_queue<int,vector<int>,geater<int>>min_heap;
   min_heap.push(9);
   min_heap.push(2);
   min_heap.push(4);
   min_heap.push(3);
   cout<<min_heap.top();
   int n = min_heap.size();
   for(int i = 0; i < n ; i++)
   {
    cout<<min_heap.top()<<" ";
    min_heap.pop();
   }
}
