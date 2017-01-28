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

	int ref[3] = {0};
	for(int i=0;i<n;i++)
		ref[arr[i]]++;

	int odd = 0, even = 0;
	if(ref[0]%2 ==0 && ref[0] != 0)
		even++;
	else
		odd++;

	if(ref[1]%2 ==0 && ref[0] != 0)
		even++;
	else
		odd++;

	if(ref[2]%2 ==0 && ref[0] != 0)
		even++;
	else
		odd++;


	if((ref[0] == 0 && ref[1] == 0 && ref[2] != 0) || (ref[0] == 0 && ref[1] != 0 && ref[2] == 0) || (ref[0] != 0 && ref[1] == 0 && ref[2] == 0))
		cout<<n<<endl;
	else
	{
		if(odd != 0 && even != 0)
			cout<<1<<endl;
		else if((odd == 0 && even != 0) || (odd != 0 && even == 0))
			cout<<2<<endl;
	}
}