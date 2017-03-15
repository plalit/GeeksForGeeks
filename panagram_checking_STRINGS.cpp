#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	char str[] = "The quick brown fox jumps over the lazy do";
	int len = strlen(str);

	int ref[26] = {0};

	for(int i=0;i<len;i++)
		ref[str[i] - 'a']++;

	bool flag = true;
	for(int i=0;i<26;i++)
	{
		if(ref[i] == 0)
			flag = false;
	}

	if(flag)
		cout<<"panagram"<<endl;
	else
		cout<<"Not panagram"<<endl;
}