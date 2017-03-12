#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[] = "aabacbebebe";
	int len = strlen(str);
	int k, max = 0, count = 0, j=0, i=0;
	cin>>k;
	int ref[26] = {-1};
	int ref2[26] = {0};

	for(i=0;i<len;i++)
	{
		if(count < k)
		{
			if(ref2[str[i] - 'a'] == 0)
				count++;
			ref2[str[i] - 'a']++;
			ref[str[i] - 'a'] = i;
		}
		else if(count == k)
		{
			if(ref2[str[i] - 'a'] > 0)
				ref[str[i] - 'a'] = i;
			else
			{
				count++;
				ref2[str[i] - 'a']++;
				ref[str[i] - 'a'] = i;

				if(i - j > max)
					max = i - j;
				
				int index = ref[str[j] - 'a'];
				ref[str[j] - 'a'] = -1;
				
				while(j != index)
				{
					ref2[str[j] - 'a']--;

					if(ref2[str[j] - 'a'] == 0)
						count--;
					j++;
				}
				ref2[str[j] - 'a']--;
				if(ref2[str[j] - 'a'] == 0)
					count--;
				j++;
			}
		}
	}
	if(i - j > max)
		max = i - j;
	cout<<max<<endl;
}