#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	char str[] = "89789";
	int len = strlen(str);

	int res = 0;
	for(int i=0;i<len;i++)
		res = res*10 + int(str[i] - '0');

	cout<<res<<endl;
}