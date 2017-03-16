#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};

void print_all_combinations(int str[], int len, int index, char res[])
{
	if(index == len)
	{
		for(int j=0;j<len;j++)
			cout<<res[j];
		cout<<endl;
		return;
	}

	int t = str[index];
	for(int i=0;i<strlen(hashTable[t]);i++)
	{
		res[index] = hashTable[t][i];
		print_all_combinations(str, len, index+1, res);
	}
}

int main()
{
	int str[] = {2, 3, 4};
	int len = sizeof(str)/sizeof(str[0]);
	char res[len];
	print_all_combinations(str, len, 0, res);
}