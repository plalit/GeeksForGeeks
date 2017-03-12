#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n >= 1)
	{
		int x = n%26;
		if(x == 0)
		{
			cout<<"Z";
			n /=26;
			n -=1;
		}
		else
		{
			cout<<(char)(x + 64);
			n /=26;
		}
	}
	cout<<endl;
}