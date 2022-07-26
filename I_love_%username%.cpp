/*
 * Problem Link   : https://codeforces.com/problemset/problem/155/A
 * Problem Name   : I_love_%username%
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int MIN=0,MAX=0,sum=0;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        if(i==0){
            MIN=p;
            MAX=p;
        }
        else{
            if (p < MIN){
            MIN = p;
            ++sum;
            }
            if (p > MAX){
                MAX = p;
                ++sum;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}

