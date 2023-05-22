/**************************************************************************************************************************************************************************


Polycarp plays "Game 23". Initially he has a number n
 and his goal is to transform it to m
. In one move, he can multiply n
 by 2
 or multiply n
 by 3
. He can perform any number of moves.

Print the number of moves needed to transform n
 to m
. Print -1 if it is impossible to do so.

It is easy to prove that any way to transform n
 to m
 contains the same number of moves (i.e. number of moves doesn't depend on the way of transformation).

Input
The only line of the input contains two integers n
 and m
 (1≤n≤m≤5⋅108
).

Output
Print the number of moves to transform n
 to m
, or -1 if there is no solution.

Examples
inputCopy
120 51840
outputCopy
7
inputCopy
42 42
outputCopy
0
inputCopy
48 72
outputCopy
-1
Note
In the first example, the possible sequence of moves is: 120→240→720→1440→4320→12960→25920→51840.
 The are 7
 steps in total.

In the second example, no moves are needed. Thus, the answer is 0
.

In the third example, it is impossible to transform 48
 to 72
.


***************************************************************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	
	if(n==m)
	cout<<0<<endl;
	
	else{
		if(m%n!=0)
		cout<<-1<<endl;
		else
		{
			int val=m/n;
			int c=0;
			int flag=0;
			
			while(val>0){
				if(val%2==0)
				{
					val=val/2;
					c++;
				}
				else{
					if(val%3!=0 &&val!=1)
					{
						flag=1;
						break;
					}
					val=val/3;
					c++;
				}
			}
			if(flag==0)
			cout<<c-1<<endl;
			else
			cout<<-1<<endl;
			
			
		}
		
	}
	return 0;
}

/**************************************************************************************************************************************************************************/
#include<iostream>
using namespace std;
int main()
{
	int a, b; cin >> a >> b;
	int k = 0;
	while ((b / a) % 3 == 0) a *= 3, k++;
	while (a < b) a *= 2, k++;
	cout << (a==b ? k:-1);
}
