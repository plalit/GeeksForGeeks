#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[] = "peaks";
	int len = strlen(str);

	char str2[] = "geeks";
	int len2 = strlen(str);

	int i=0, j=0, count = 0;
	while(i < len && j < len2)
	{
		if(str[i] == str2[j])
		{
			i++;
			j++;
		}
		else
		{
			if(len > len2)
				j++;
			else if(len2 > len)
				i++;
			else
			{
				i++;
				j++;
			}
			count++;
		}
	}

	while(i < len)
	{
		i++;
		count++;
	}
	while(j < len2)
	{
		j++;
		count++;
	}
	if(count == 1)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}