#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

void print_sentences(string input[3][3], int row, int column, string output[], int index, int i, int j)
{
	output[index] = input[i][j];
	if(index == 2)
	{
		for(int t=0;t<3;t++)
			cout<<output[t]<<" ";
		cout<<endl;
		return;
	}

	for(int k=0;k<column;k++)
	{
		if(input[i+1][k] != "")
			print_sentences(input, 3, 3, output, index+1, i+1, k);
	}
}

void recr_first_line(string input[3][3], int row, int column, string output[], int index, int i, int j)
{
	for(int u=0;u<3;u++)
	{
		if(input[0][u] != "")
			print_sentences(input, 3, 3, output, index, 0, u);
	}
}

int main()
{
	string input[3][3] = {{"you", "we"},
					{"have", "are"},
				     {"sleep", "eat", "drink"}};

	string output[3];
	recr_first_line(input, 3, 3, output, 0, 0, 0);
}