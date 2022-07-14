/*
 * Problem Link   : https://codeforces.com/problemset/problem/158/B
 * Problem Name   : Taxi
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
const int MAX=1e5+56;
int s[MAX];
int main(){
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s[a]++;
    }
    int sum=0;
    sum+=s[4];
    sum+=s[3];
    s[1]=s[1]-s[3];
    s[1]=s[1]<0?0:s[1];
    if(s[1]<0)
        s[1]=0;
    sum+=s[2]/2+s[2]%2;
    s[2]=s[2]%2;
    s[1] = s[1]-2*(s[2]);
    if(s[1]>0){
        sum+=(s[1])/4;
        if(s[1]%4>0)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}