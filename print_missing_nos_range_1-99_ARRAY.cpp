#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	bool aux[100] = {false};

	for(int i=0;i<n;i++)
	{
		if(arr[i] < 100)
			aux[arr[i]] = true;
	}
	bool flag = false;
	int temp,i=0;
	while(i<100)
	{
		if(aux[i] == true)
		{
			i++;
			continue;
		}
		else if(aux[i] == false && aux[i+1] == false)
		{
			temp = i;
			flag = true;
			while(aux[i] == false)
				i++;
		}

		if(flag == false && aux[i] == false)
		{
			cout<<i<<endl;
			i++;
		}
		else if(temp <= 100)
		{
			cout<<temp<<" - "<<i-1<<endl;
			i++;
		}
		flag = false;
	}//88, 105, 3, 2, 200, 0, 10
	 //9, 6, 900, 850, 5, 90, 100, 99
}