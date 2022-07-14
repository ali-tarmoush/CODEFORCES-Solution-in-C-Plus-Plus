/*
 * Problem Link   : https://codeforces.com/problemset/problem/230/A
 * Problem Name   : Dragons
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<pair<int ,int> >v;
	int s,n,x,y;
	cin>>s>>n;
	bool p=true;
 	 for(int i=0;i<n;i++){
		 cin>>x>>y;
		  v.push_back(make_pair(x,y));
	 }
	 sort(v.begin(),v.end());
	 for(int i=0;i<n;i++){
		 if(s>v[i].first)
			 s+=v[i].second;
         else{
			 p=false;
			 break;
         }
     }
     if(p)
        cout<<"YES";
     else
        cout<<"NO";
    return 0;
}
