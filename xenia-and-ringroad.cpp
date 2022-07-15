/*
 * Problem Link   : https://codeforces.com/problemset/problem/339/B
 * Problem Name   : Xenia and Ringroad
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,x,counter=1,sum=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        if(x>counter)
            sum+=x-counter;
        else if(x<counter)
            sum+=abs(n-counter)+x;
        counter=x;
    }
    cout<<sum;
    return 0;
}