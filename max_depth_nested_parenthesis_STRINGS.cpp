#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	char str[] = "( ((X)) (((Y))) )";
	int len = strlen(str);
	bool flag = false;
	int open = 0,count = 0, max = 0;

	for(int i=0;i<len;i++)
	{
		if(str[i] == '(')
		{
			open++;
			if(open > count)
				count = open;
			cout<<"open "<<open<<endl;
		}
		else if(str[i] == ')')
		{
			if(open > 0)
				open--;
			else
			{
				flag = true;
				break;
			}
		}
	}

	if(flag == false && open == 0)
		cout<<count<<endl;
	else
		cout<<-1<<endl;
}