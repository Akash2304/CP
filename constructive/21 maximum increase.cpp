/*********************************************************************************************************************************************************************
You are given array consisting of n integers. Your task is to find the maximum length of an increasing subarray of the given array.

A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray strictly greater than previous.

Input
The first line contains single positive integer n (1 ≤ n ≤ 105) — the number of integers.

The second line contains n positive integers a1, a2, ..., an (1 ≤ ai ≤ 109).

Output
Print the maximum length of an increasing subarray of the given array.

Examples
inputCopy
5
1 7 2 11 15
outputCopy
3
inputCopy
6
100 100 100 100 100 100
outputCopy
1
inputCopy
3
1 2 3
outputCopy
3
**********************************************************************************************************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int count =1;
	int maxcount=0;
	
	for(int i=0;i<n-1;i++)
	{
		
		if(a[i]<a[i+1])
		count++;
		else{
			if(maxcount<count)
			maxcount=count;
			
			count=1;
		}
	}
	if(maxcount<count)
	cout<<count<<endl;
	else
	cout<<maxcount<<endl;
	return 0;
}
