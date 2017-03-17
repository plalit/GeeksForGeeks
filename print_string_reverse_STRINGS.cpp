#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void print_reverse(char str[], int index, int length)
{
	if(index <= length)
	{
		print_reverse(str, index+1, length);
		cout<<str[index];
	}
}

int main()
{
	char str[] = "Geeks for Geeks";
	int length = strlen(str);

	print_reverse(str, 0, length);
	cout<<endl;
}