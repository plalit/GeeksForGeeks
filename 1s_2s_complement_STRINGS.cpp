#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	char str[] = "1100";
	int len = strlen(str);

	cout<<"1s complement of the number: ";
	for(int i=0;i<len;i++)
	{
		if(str[i] == '0')
			cout<<'1';
		else
			cout<<'0';
	}
	cout<<endl;
	int i=len-1, k=len-1;
	bool flag = false;
	char ref[len];
	cout<<"2s complement of the number: ";
	while(i >= 0)
	{
		if(flag == false)
		{
			flag = true;
			while(str[i] == '0')
			{
				ref[k] = '0';
				k--;
				i--;
			}
			if(i >=0)
			{
				ref[k] = '1';
				k--;
				i--;
			}
		}

		if(str[i] == '0')
		{
			ref[k] = '1';
			k--;
			i--;
		}
		else
		{
			ref[k] = '0';
			k--;
			i--;
		}
	}
	for(int i=0;i<len;i++)
		cout<<ref[i];
	cout<<endl;
}

