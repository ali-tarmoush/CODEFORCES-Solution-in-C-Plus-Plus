/*
 * Problem Link   : https://codeforces.com/problemset/problem/510/A
 * Problem Name   : Fox And Snake
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;bool p=true;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2==1)
                cout<<"#";
            else{
                if(p==true){
                    if(j==m){
                        cout<<"#";
                        p=false;
                    }
                    else
                        cout<<".";
                }
                else{
                    if(j==1)
                        cout<<"#";
                    else
                        cout<<".";
                    if(j==m)
                        p=true;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}