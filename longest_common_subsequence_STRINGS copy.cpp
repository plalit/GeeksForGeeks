#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<deque>
using namespace std;

int main()
{
	char str1[] = "ABCDGH";
	int len1 = strlen(str1);
	char str2[] = "AEDFHR";
	int len2 = strlen(str2);

	int ref[len1+1][len2+1];

	for(int i=0;i<=len1;i++)
	{
		for(int j=0;j<=len2;j++)
		{
			if(i == 0|| j == 0)
				ref[i][j] = 0;
			else
			{
				if(str1[i-1] == str2[j-1])
				{
					ref[i][j] = ref[i-1][j-1]+1;
				}
				else
					ref[i][j] = max(ref[i-1][j], ref[i][j-1]);
			}
		}
	}
	//cout<<ref[len1][len2]<<endl;

	int i = len1, j = len2;
	while(i > 0)
	{
		while(j > 0)
		{
			if(str1[i-1] == str2[j-1])
			{
				cout<<str1[i-1]<<" ";
				i--;
				j--;
			}
			else if(ref[i-1][j] > ref[i][j-1])
				i--;
			else
				j--;
		}
	}
	cout<<endl;
}