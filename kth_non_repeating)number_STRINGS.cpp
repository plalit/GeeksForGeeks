#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	char str[] = "geeksforgeeks";
	int len = strlen(str);

	int ref[26] = {0}, k;
	cin>>k;

	for(int i=0;i<len;i++)
		ref[str[i] - 'a']++;

	int count = 0;
	for(int i=0;i<len;i++)
	{
		if(ref[str[i] - 'a'] == 1)
			count++;

		if(count == k)
		{
			cout<<str[i]<<endl;
			break;
		}
	}

	if(count < k)
		cout<<"Kth non repeating char not available"<<endl;
}