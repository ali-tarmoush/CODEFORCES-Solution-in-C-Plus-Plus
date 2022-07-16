/*
 * Problem Link   : https://codeforces.com/problemset/problem/579/A
 * Problem Name   : Raising Bacteria
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long x , sum=0;
    cin>>x;
    while(x/2!=0){
        if(x%2==1)
            sum++;
        x=x/2;
    }
    cout<<sum+1<<endl;
	return 0;
}