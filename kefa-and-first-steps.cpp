/*
 * Problem Link   : https://codeforces.com/problemset/problem/580/A
 * Problem Name   : Kefa and First Steps
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b=0,sum=0,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=b){
            sum++;
            b=a;
        }
        else{
            sum=1;
            b=a;
        }
        if(sum>max)
            max=sum;
    }
    cout<<max;
    return 0;
}