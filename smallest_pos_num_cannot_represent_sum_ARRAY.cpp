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
	int sum = arr[0];
	bool flag = false;
	for(int i=1;i<n;i++)
	{
		if(sum +1 >= arr[i])
			sum += arr[i];
		else
		{
			cout<<"Smallest pos number: "<<sum+1<<endl;
			flag = true;
			break;
		}
	}
	if(flag == false)
		cout<<"Smallest pos number: "<<sum+1<<endl;
	//1, 3, 6, 10, 11, 15
	 //1, 2, 3, 4, 5, 6
	 //1, 1, 1, 1
	 //1, 1, 3, 4
	 //1, 2, 5, 10, 20, 40
}