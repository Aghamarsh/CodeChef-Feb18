#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

typedef long double lld;
typedef long long ll;

int main() {

    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll tun;
        cin>>tun;
        
        lld ar[tun];
        
        for(ll j=0;j<tun;j++)
        scanf("%llf",&ar[j]);
        
        sort(ar,ar+tun);
        
        ll car,d,s;
        cin>>car>>d>>s;
        lld delay=(car-1)*ar[tun-1];

        printf("%.9llf\n",delay);
    }
}
