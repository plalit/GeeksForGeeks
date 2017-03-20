#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int ng[n];
	int ns[n];

	std::stack<int>s;
	std::stack<int>r;

	for(int i=n-1;i>=0;i--)
	{
		while(!s.empty() && s.top() <= arr[i])
			s.pop();

		if(!s.empty())
			ng[i] = s.top();
		else
			ng[i] = -1;

		s.push(arr[i]);
	}
	// 5, 1, 9, 2, 5, 1, 7
	// 2  2 -1  1 -1 -1 -1
	// 4, 8, 2, 1, 9, 5, 6, 3
	// 2  5  5  5 -1  3 -1 -1

	for(int i=0;i<n;i++)
		cout<<ng[i]<<" ";
	cout<<endl;

	for(int i=n-1;i>=0;i--)
		r.push(arr[i]);

	cout<<r.top()<<endl;

	for(int i=0;i<n;i++)
	{
		if(ng[i] != -1)
		{
			while(!r.empty() && r.top() != ng[i])
					r.pop();
			//cout<<r.top()<<" ";
			
			while(!r.empty() && ng[i] <= r.top())
				r.pop();

			if(!r.empty())
				ns[i] = r.top();
			else
				ns[i] = -1;
		}
		else
			ns[i] = -1;
	}


	for(int i=0;i<n;i++)
		cout<<ns[i]<<" ";
	cout<<endl;

}