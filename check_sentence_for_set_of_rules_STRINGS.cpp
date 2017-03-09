#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<deque>
using namespace std;

int main()
{
	char str[] = "My name is Ram.";
	int len = strlen(str);

	bool flag = false, flag2 = false, flag3 = false;
	bool boom = false;
	for(int i=0;i<len;i++)
	{
		if(i == 0)
		{
			if(str[i] < 'A' || str[i] > 'Z')
			{
				cout<<"incorrect sentence"<<endl;
				boom = true;
				break;
			}
		}
		
		if(str[len-1] != '.')
		{
			cout<<"incorrect sentence"<<endl;
			boom = true;
			break;
		}

		if(flag)
		{
			if(str[i] == ' ')
			{
				cout<<"incorrect sentence"<<endl;
				boom = true;
				break;
			}
			else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				if(str[i] >= 'A' && str[i] <= 'Z')
					flag2 = true;
				else
					flag3 = true;
				flag = false;
				continue;
			}
			else
			{
				cout<<"incorrect sentence"<<endl;
				boom = true;
				break;	
			}
		}

		if(str[i] == ' ')
		{
			if(flag3)
				flag3 = false;
			if(flag2)
				flag2 = false;
			flag = true;
		}

		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			if(flag3)
			{
				cout<<"incorrect sentence"<<endl;
				boom = true;
				break;
			}
			if(flag2)
			{
				cout<<"incorrect sentence"<<endl;
				boom = true;
				break;
			}
			else
				flag2 = true;

			if(flag)
				flag = false;
		}
	}

	if(boom == false)
		cout<<"Correct Sentence"<<endl;
}