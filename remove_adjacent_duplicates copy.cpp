#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<deque>
using namespace std;

int main()
{
	char str[] = "geeksforgeeg";
	int len = strlen(str);

	int i=-1,j=0,index;
	bool flag = false;
	while(j < len)
	{
		if(str[j] == str[j+1])
		{
			while(str[j] == str[j+1])
				j++;
			j++;
		}
		else
		{
			i++;
			str[i] = str[j];
			j++;
		}
		
		if(str[i] == str[j])
		{
			j++;
			flag = true;
			char x = str[j];
			index = i;
		}
	}

	if(flag)
	{
		for(int k = index;k<len-1;k++)
		{
			str[k] = str[k+1];
		}
	}
	if(flag)
		str[i] = '\0';
	else
		str[i+1] = '\0';

	// acbbcddc = a
	// caaabbbaac = " "
	for(int k=0; str[k]!= '\0';k++)
		cout<<str[k];
	cout<<endl;
}