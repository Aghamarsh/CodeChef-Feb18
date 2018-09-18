#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

int main() {
    
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        vector <pair <char,int>> v;
        ll a[27];
        
        string s;
        cin>>s;
        
        for(ll j=0;j<26;j++)
        a[j]=0;
        
        for(ll j=0;j<s.length();j++)
        {
            v.push_back(make_pair(s[j],j+1));
            ll k=(ll) (s[j]-97);
            a[k]++;
        }
        
        sort(v.begin(),v.end());
    
        ll count=0;
        
        for(ll j=0;j<26;j++)
        {
            if(a[j]%2==1)
            count++;
        }
        
        if(count>1)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll size=s.length();
            ll ans[size];
            ll m=0;
            ll n=0;
            
            for(ll j=0;j<26;j++)
            {
                if(a[j]%2==1)
                {
                    ans[(size/2)]=v[n].second;
                    n++;
                    a[j]--;
                }
                
                while(a[j]>0)
                {
                    ans[m]=v[n].second;
                    n++;
                    
                    ans[size-m-1]=v[n].second;
                    m++;
                    n++;
                    a[j]-=2;
                }
            }
            
            for(ll j=0;j<size;j++)
            cout<<ans[j]<<" ";
            cout<<endl;
        }
        
    }
}