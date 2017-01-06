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

	int aux[3] = {0};

	for(int i=0;i<n;i++)
	{
		if(arr[i]%3 == 0)
			aux[0]++;
		else if(arr[i]%3 == 1)
			aux[1]++;
		else
			aux[2]++;
	}
	int group2 = 0;
	// For counting groups of size 2
	group2 += max(aux[1], aux[2]);
	cout<<group2<<endl;
	group2 += (aux[0]*(aux[0]-1))/2;
	cout<<group2<<endl;

	int group3;
	// For counting groups of size 3
	group3 += (aux[0]*(aux[0]-1)*(aux[0]-2))/6;
	cout<<group3<<endl;
	group3 += (aux[1]*(aux[1]-1)*(aux[1]-2))/6;
	cout<<group3<<endl;

	int maxm = aux[0];
	for(int i=1;i<3;i++)
	{
		if(aux[i] > maxm)
			maxm = aux[i];
	}
	group3 += maxm;
	cout<<group3<<endl;
	cout<<"Groups of size 2 and 3 are: "<<group2<<" "<<group3<<endl;
}