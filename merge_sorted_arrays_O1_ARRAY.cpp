#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n], brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<m;i++)
		cin>>brr[i];

	//ar1[] = {1, 5, 9, 10, 15, 20};
    //   ar2[] = {2, 3, 8, 13};

    for(int i=m-1;i>=0;i--)
    {
    	int last = arr[n-1];
    	int replace = brr[i];
    	int j = n-1;
    	while(arr[j] > replace)
    		j--;

    	j++;
    	brr[i] = last;
    	for(int k=j;k<n;k++)
    	{
    		int temp = arr[k];
    		arr[k] = replace;
    		replace = temp;
    	}
    }	

    for(int i=0;i<n;i++)
    	cout<<arr[i]<<" ";
    cout<<endl;

    for(int i=0;i<m;i++)
    	cout<<brr[i]<<" ";
    cout<<endl;

}