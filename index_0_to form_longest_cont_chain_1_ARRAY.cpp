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

	int first = -1,second = -1, third = -1;
	int longest = 0,result;
	int j=0;
	while(j<n)
	{
		if(arr[j] == 0)
		{
			int temp = third;
			third = j;
			int temp2 = second;
			second = temp;
			first = temp2;

			if(third - first > longest && third != 0)
			{
				result = second;
				longest = third - first;
			}
		}
		j++;
	}//1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1
	int temp = third;
	first = second;
	third = n;
	second = temp;
	if(third - first > longest && third != 0)
	{
		result = second;
		longest = third - first;
	}
	cout<<result<<endl;
}