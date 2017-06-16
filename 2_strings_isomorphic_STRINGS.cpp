#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[] = "aab";
	int len = strlen(str);

	char str2[] = "xyz";
	int len2 = strlen(str);

	int ref[26] = {0};
	int ref2[26] = {0};


	bool flag = false;
	for(int i=0;i<len;i++)
	{
		if(len != len2)
		{
			flag = true;
			cout<<"Not isomorphic"<<endl;
			break;
		}

		if(ref[str[i] - 'a'] == 0)
			ref[str[i] - 'a'] = (str2[i] - 'a');
		else
		{
			int x = (str2[i] - 'a');
			if(ref[str[i] - 'a'] != x)
			{
				flag = true;
				cout<<"Not isomorphic"<<endl;
				break;
			}
		}
	}

	if(flag == false)
		cout<<"isomorphic"<<endl;
}