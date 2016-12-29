#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

// just the case where the sum is 0 needs to be taken care of. Just apply the if else case
// and it will be done.
int main()
{
	int n,sum;
	cin>>n>>sum;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int total = 0;

	int j=0,i=0;
	bool flag = false;
	while(i < n)
	{
		if(total == sum)
		{
			cout<<"subarray with the given sum: "<<j<<" "<<i-1<<endl;
			flag  = true;
			break;
		}
		else if(sum > total)
		{
			total += arr[i];
			i++;
		}
		else if(total > sum)
		{
			total -= arr[j];
			j++;
		}
	}
	if (flag == false)
		cout<<"No subarray found"<<endl;
	//1, 4, 20, 3, 10, 5  1, 4, 0, 0, 3, 10, 5
}