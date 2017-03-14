#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[] = "Ab,c,de!$";
	int len = strlen(str);
	char ref[len], i=0, k=0, j=0;
	
	for(i=0;i<len;i++)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			ref[k] = str[i];
			k++;
		}
	}
	ref[k] = '\0';
	i=0, j=k-1;
	while(j >= 0)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = ref[j];
			j--;
			i++;
		}
		else
			i++;
	}

	for(i=0;i<len;i++)
		cout<<str[i];
	cout<<endl;
}