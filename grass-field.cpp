/*
 * Problem Link   : https://codeforces.com/problemset/problem/1701/A
 * Problem Name   : Grass Field
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            int a;
            cin>>a;
            sum+=a;
        }
        if(sum==0)
        cout<<0<<endl;
        else if(sum!=4)
        cout<<1<<endl;
        else 
        cout<<2<<endl;
    }
}
