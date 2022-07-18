/*
 * Problem Link   : https://codeforces.com/problemset/problem/131/A
 * Problem Name   :  cAPS lOCK
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string s;
	cin>>s;
	bool p;
	if(isupper(s[0]))
	p=1;
	else
	p=0;
	int t=0;
	for(int i=0;i<s.size();i++)
	if(isupper(s[i]))
	t++;
	
	if((t==s.size()-1&&p==0)){
		s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++)
    	s[i]=tolower(s[i]);
    	cout<<s;
	}
	else if( t==s.size() && p==1){
		for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]);
		cout<<s;
	}
	else 
    	cout<<s<<endl;
	return 0;
}