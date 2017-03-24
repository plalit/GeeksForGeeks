#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,x,y;
	cin>>n>>x>>y;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int ans = 0;

	bool flag = false, flag_2 = false;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == x || arr[i] == y)
		{
			if(flag)
			{
				flag_2 = true;
				flag = false;
			}
			else
				flag = true;
		}
		else
		{
			if(flag_2)
			{
				while(arr[i] != x && arr[i] != y)
					i++;
				if(ans < i)
					ans = i-1;
				flag_2 = false;
				i -= 1;
			}
		}
	}
	// 7, 42, 5, 6, 42, 8, 7, 5, 3, 6, 7 X = 7 Y = 42
	cout<<ans<<endl;
}
