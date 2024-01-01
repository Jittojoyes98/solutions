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
    map<int,int>count;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count[arr[i]]++;
    }

    map<int,vector<int>>table;
    int res=0,tableN,finalkEY;
    cin>>tableN;
    for(int i=0;i<tableN;i++){
        int m,ans=0,keyVAL;
        cin>>m>>keyVAL;
        for(int j=0;j<m;j++){
            int tableValue;
            cin>>tableValue;
            table[arr[i]].push_back(tableValue);
            if(count[tableValue]){
                ans++;
            }
        }
        if(ans>res){
            res=ans;finalkEY=keyVAL;
        }
    }
    
    cout<<finalkEY<<"\n";
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