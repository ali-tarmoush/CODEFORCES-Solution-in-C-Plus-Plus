/*
 * Problem Link   : https://codeforces.com/problemset/problem/1367/B
 * Problem Name   : Even Array
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int a[45];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>a[j];
        int o = 0,e = 0;
        for(int j=0; j<n; j++)
            if(j%2 != a[j] % 2)
                if(a[j] % 2 == 1)
                    o++;
                else 
                    e++;
        if(o != e)
            cout<<-1<<endl;
        else
            cout<<e<<endl;

    }
	return 0;
}