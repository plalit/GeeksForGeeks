#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

void print_permutation(char str[], int len, char res[], int ind, int x[])
{
	if(ind == len)
	{
		for(int i=0;i<len;i++)
			cout<<res[i];
		cout<<endl;
		return;
	}
	else
	{
		for(int i=0;i<len;i++)
		{
			if(!x[i])
			{
				res[ind] = str[i];
				x[i] = 1;
				print_permutation(str, len, res, ind+1, x);
				x[i] = 0;
			}
		}
	}
}

int main()
{
	char str[] = "ABC";
	int len = strlen(str);

	char res[len];
	int x[len];
	for(int i=0;i<len;i++)
		x[i] = 0;
	print_permutation(str, len, res, 0, x);
}