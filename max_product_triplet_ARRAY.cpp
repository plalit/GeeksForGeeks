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

	int first = -100000, second = -100000, third = -100000, negfirst = 100000, negsecond = 100000;

	for(int i=0;i<n;i++)
	{
		if(arr[i] > third)
		{
			int temp = third;
			third = arr[i];
			first = second;
			second = temp;
		}
		else if(arr[i] > second)
		{
			first = second;
			second = arr[i];
		}
		else if(arr[i] > first)
			first = arr[i];

		if(arr[i] < negsecond)
		{
			negfirst = negsecond;
			negsecond = arr[i];
		}
		else if(arr[i] < negfirst)
			negfirst = arr[i];
	}// 10, 3, 5, 6, 20
	 //-10, -3, -5, -6, -20
	 //1, -4, 3, -6, 7, 0
	
	int pos = first*second*third;
	int negpos = third*negfirst*negsecond;
	
	if(pos > negpos)
		cout<<pos<<endl;
	else
		cout<<negpos<<endl;
	
}