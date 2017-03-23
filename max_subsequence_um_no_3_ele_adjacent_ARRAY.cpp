#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int one = arr[n-1] + arr[n-2], two = arr[n-2] + arr[n-3];

	if(n <= 3)
	{
		if(one > two)
			cout<<one<<endl;
		else
			cout<<two<<endl;
	}
	else
	{
		int i = n-4;
		bool flag = true;
		while(i >= 0)
		{
			if(flag)
			{
				one += arr[i];
				if(i >= 0)
					one += arr[i-1];
				flag = false;
				i--;
			}
			else
			{
				flag = true;
				two += arr[i];
				if(i >= 0)
					two += arr[i-1];
			}
			i --;
		}
		//3000, 2000, 1000, 3, 10
		//100, 1000, 100, 1000, 1
		//1, 2, 3, 4, 5, 6, 7, 8
		//1, 1, 1, 1, 1		
		if(one > two)
			cout<<one<<endl;
		else
			cout<<two<<endl;

	}
}