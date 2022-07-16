/*
 * Problem Link   : https://codeforces.com/problemset/problem/1353/B
 * Problem Name   : Two Arrays And Swaps
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX=101;
int a[MAX];
int b[MAX];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int ind=0;ind<t;ind++){
        int n,k;
        cin>>n>>k;
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<n; j++){
            cin>>b[j];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                if(b[j] > a[j]){
                    swap(a[j],b[j]);
                    break;
                }
            }
        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
	return 0;
}