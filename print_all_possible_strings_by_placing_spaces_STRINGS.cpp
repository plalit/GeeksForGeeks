#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

void print_with_space(char str[], int len, char ref[], int index, int k)
{
	if(k == len)
	{
		ref[index] = '\0';
		for(int i=0;ref[i] != '\0';i++)
			cout<<ref[i];
		cout<<endl;
		return;
	}

	ref[index] = str[k];
	print_with_space(str, len, ref, index+1, k+1);

	ref[index] = ' ';
	ref[index+1] = str[k];
	print_with_space(str, len, ref, index+2, k+1);
}

int main()
{
	char str[] = "ABC";
	int len = strlen(str);

	char ref[2*len];
	ref[0] = str[0];
	print_with_space(str, len, ref, 1, 1);
}