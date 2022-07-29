/*
 * Problem Link   : https://codeforces.com/problemset/problem/1360/B
 * Problem Name   : Honest Coach
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
const int MAX=54;
int a[MAX];
int main() {
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
        sort(a,a+n);
        int Min=1000;
        for (int j = n-1;j>0; --j)
            if(a[j]-a[j-1]<Min)
                Min=a[j]-a[j-1];
        cout<<Min<<endl;
    }
    return 0;
}

