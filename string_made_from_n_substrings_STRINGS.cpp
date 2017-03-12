#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	char str[] = "aabaabaabaab";
	int len = strlen(str);
	int ref[26] = {0}, min = 10000, count = 0;

	for(int i=0;i<len;i++)
		ref[str[i] - 'a']++;
	
	for(int i=0;i<26;i++)
	{
		if(ref[i] != 0 && ref[i] < min)
			min = ref[i];
	}

	for(int i=0;i<26;i++)
	{
		if(ref[i] != 0)
		{
			ref[i] /= min;
		}
	}
	
	for(int i=0;i<len;i++)
	{
		if(ref[i] != 0)
			count += ref[i];
	}

	bool flag = true;
	if(len%count != 0 || len <= count)
	{
		flag = false;
		cout<<"Cannot be done"<<endl;
	}

	int arr[26] = {0}, t=count;
	for(int i=0;i<len;i++)
	{
		arr[str[i] - 'a']++;
		t--;
		if(t == 0)
		{
			for(int k=0;k<26;k++)
			{
				if(ref[k] != arr[k])
				{
					flag = false;
					break;
				}
			}
			t = count;
			for(int p=0;p<26;p++)
				arr[p] = 0;
		}
	}
	if(flag)
		cout<<"Yes"<<endl;
}