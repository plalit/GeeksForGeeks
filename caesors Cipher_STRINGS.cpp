#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int len = strlen(str), shift;
	cin>>shift;

	for(int i=0;i<len;i++)
	{
		int x = (int)(str[i] - 'A');
		x = (x + shift)%26;

		cout<<(char)(x + 'A');
	}
	cout<<endl;
}