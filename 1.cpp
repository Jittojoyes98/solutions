#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 2e6 + 7, INF = INT_MAX / 10;


void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,vector<int>>table;
    map<int,int>count;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        for(int j=0;j<m;j++){
            int tableValue;
            cin>>tableValue;
            table[arr[i]].push_back(tableValue);
            count[tableValue]++;
        }
    }
    int ans=0,res=arr[0];
    for(int i=0;i<n;i++){
        if(count[arr[i]]>ans){
            res=arr[i];
            ans=count[arr[i]];
        }
    }
    cout<<res<<"\n";
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}