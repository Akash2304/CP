/********************************************************************************************************************************************************************
You are given an array of n integers a1,a2,…,an. After you watched the amazing film "Everything Everywhere All At Once", you came up with the following operation.

In one operation, you choose n−1 elements of the array and replace each of them with their arithmetic mean (which doesn't have to be an integer).
For example, from the array [1,2,3,1] we can get the array [2,2,2,1], if we choose the first three elements, or we can get the array [43,43,3,43],
if we choose all elements except the third.

Is it possible to make all elements of the array equal by performing a finite number of such operations?

Input
The first line of the input contains a single integer t (1≤t≤200)  — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n (3≤n≤50)  — the number of integers.

The second line of each test case contains n integers a1,a2,…,an (0≤ai≤100).

Output
For each test case, if it is possible to make all elements equal after some number of operations, output YES. Otherwise, output NO.

You can output YES and NO in any case (for example, strings yEs, yes, Yes will be recognized as a positive response).

Example
inputCopy
4
3
42 42 42
5
1 2 3 4 5
4
4 3 2 1
3
24 2 22
outputCopy
YES
YES
NO
NO
Note
In the first test case, all elements are already equal.

In the second test case, you can choose all elements except the third, their average is 1+2+4+54=3, so the array will become [3,3,3,3,3].

It's possible to show that it's impossible to make all elements equal in the third and fourth test cases.
**********************************************************************************************************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n],sm=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sm+=arr[i];
		}
		int i=0;
		for(;i<n;i++){
			if((n-1)*arr[i]==sm-arr[i]){
				cout<<"YES\n";
				break;
			}
		}
		if(i>=n)
			cout<<"NO\n";
	}
}
