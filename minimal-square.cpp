/*
 * Problem Link   : https://codeforces.com/problemset/problem/1360/A
 * Problem Name   : Minimal Square
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a > b){
            swap(a,b);
        }
        cout<<max(a*2,b)*max(a*2,b)<<endl;
    }
	return 0;
}