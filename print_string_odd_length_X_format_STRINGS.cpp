#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	char str[] = "geeksforgeeks";
	int len = strlen(str);

	char ref[len][len];

	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
			ref[i][j] = ' ';
	}

	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(i == j)
			{
				ref[i][j] = str[i];
				ref[i][(len-j)-1] = str[i];
			}
		}
	}
	
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
			cout<<ref[i][j];
		cout<<endl;
	}
	cout<<endl;
}