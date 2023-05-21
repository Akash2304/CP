/***************************************************************************************************************************************************************************
A string is called a k-string if it can be represented as k concatenated copies of some string. For example, the string "aabaabaabaab" is at the same time
a 1-string, a 2-string and a 4-string, but it is not a 3-string, a 5-string, or a 6-string and so on. Obviously any string is a 1-string.

You are given a string s, consisting of lowercase English letters and a positive integer k. Your task is to reorder the letters in the string s in such
a way that the resulting string is a k-string.

Input
The first input line contains integer k (1 ≤ k ≤ 1000). The second line contains s, all characters in s are lowercase English letters. The string length 
s satisfies the inequality 1 ≤ |s| ≤ 1000, where |s| is the length of string s.

Output
Rearrange the letters in string s in such a way that the result is a k-string. Print the result on a single output line. If there are multiple solutions,
print any of them.

If the solution doesn't exist, print "-1" (without quotes).

Examples
inputCopy
2
aazz
outputCopy
azaz
inputCopy
3
abcabcabz
outputCopy
-1

***************************************************************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin>>k;
	
	string s;
	cin>>s;
	
	if(s.size()==1 && k==1)
	cout<<s<<endl;
	
	
	else{
	
	
	string s1,s2,s3;
	
	sort(s.begin(),s.end());
	
	vector<int>v;
	int c=1;
	for(int i=0;i<s.size()-1;i++)
	{
		if(int(s[i])==int(s[i+1]))
		c++;
		else{
			v.push_back(c);
			c=1;
			s1+=s[i];
			if(i+1==s.size()-1){
			s1+=s[i+1];
			v.push_back(c);
			}
			
		}
		
	}
	
	if(c>1){
	v.push_back(c);
	s1+=s[s.size()-1];
	}
	int flag=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]%k!=0)
		{
			flag=1;
			break;
		}
		v[i]=v[i]/k;
		
	}
	if(flag==1)
	cout<<-1<<endl;
	
	else{
		for(int i=0;i<v.size();i++)
		{
			int val=v[i];
			while(val--)
			s2+=s1[i];
		}
		
		while(k--)
		s3+=s2;
		
		cout<<s3<<endl;
		
	}
}
	
	
	return 0;
}
/***********************************************************************************************************************************************************************/
#import<bits/stdc++.h>
using namespace std;int i,j,k,l,p[26];
string s;
main()
{
  for(cin>>k>>s;s[i];)
    p[s[i++]-97]++;
  for(;j<26;)
    if(p[j++]%k)
      return cout<<-1,0;
  for(;l++<k;)
    for(i=26;i--;)
      for(j=0;j++<p[i]/k;)
        cout<<(char)(i+97);
}

/*************************************************************************************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int main(){
int k;
cin>>k;
string s,a;
cin>>s;
sort(s.begin(),s.end());
for(int i=0; i<s.size(); i+=k){
	if(s[i] == s[i+k-1])
		a+=s[i];
	else{
		cout<<"-1";
		exit(0);
	}
}
while(k--)
	cout<<a;
}

/************************************************************************************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string t, st, c;
    int k;
    cin>>k;
    cin>>t;
    std::sort(t.begin(), t.end());
    for (int i = 0; i < t.length(); i+=k) {
        st+=t[i];
    }
    for (int i = 0; i < k; ++i) {
        c+=st;
    }
    st=c;
    std::sort(st.begin(), st.end());
    if(t!=st)cout<<-1;
    else cout<<c;
}

/**************************************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
 

 bool isprime(int n){
     for (int i = 2; i <= n / 2; i ++) if (! (n % i)) return false;
     return true;
 }
 
int main(){
    int k;
    map <char , int> m;
    cin >> k;
    string s;
    cin >> s;
    for (char i : s) m[i]++;
    string ans  = "";
    for (auto i : m){
        if (i.second % k) {cout << -1; return 0;}
        for (int j = 0; j < i.second / k; j++) ans += i.first;
    }
    for (int i = 0; i < k; i++) cout << ans;
}
