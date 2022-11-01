/********************************************************************************************************************************************************************
You are given three positive (i.e. strictly greater than zero) integers x, y and z.

Your task is to find positive integers a, b and c such that x=max(a,b), y=max(a,c) and z=max(b,c), or determine that it is impossible to find such a, b and c.

You have to answer t independent test cases. Print required a, b and c in any (arbitrary) order.

Input
The first line of the input contains one integer t (1≤t≤2⋅104) — the number of test cases. Then t test cases follow.

The only line of the test case contains three integers x, y, and z (1≤x,y,z≤109).

Output
For each test case, print the answer:

"NO" in the only line of the output if a solution doesn't exist;
or "YES" in the first line and any valid triple of positive integers a, b and c (1≤a,b,c≤109) in the second line. You can print a, b and c in any order.
Example
inputCopy
5
3 2 3
100 100 100
50 49 49
10 30 20
1 1000000000 1000000000
outputCopy
YES
3 2 1
YES
100 100 100
NO
NO
YES
1 1 1000000000

*******************************************************************************************************************************************************************/

#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x > y)swap(x,y);
        if(x > z)swap(x,z);
        if(y > z)swap(y,z);
        if(y == z){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
