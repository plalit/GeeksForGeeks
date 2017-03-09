#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<deque>
using namespace std;

int main()
{
	char str[] = "aaaad";
	int len = strlen(str);

	char ref[2*len];

	int i=0,j=0;
	for(i=0;i<len;i++)
		ref[i] = str[i];

	for(j=0;j<len;j++)
	{
		ref[i] = str[j];
		i++;
	}
	// now check if there exists a string of length "len" and which is a palindrome.
}
