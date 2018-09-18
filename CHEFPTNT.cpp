#include <iostream>
using namespace std;
 
typedef long long ll;

int main() {
    
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll n,m,x,k;
        string s;
        ll e=0,o=0;
        
        cin>>n>>m>>x>>k;
        cin>>s;
        
        for(ll j=0;j<k;j++)
        {
            if(s[j]=='E')
            e++;
            else 
            o++;
        }
        
        while(m>0)
        {
            if(m%2==0 && e>0)
            {
                if(x>=e)
                {
                    n-=e;
                    e=0;
                }
                else
                {
                    n-=x;
                    e-=x;
                }
            }
            else if(m%2==1 && o>0)
            {
                if(x>=o)
                {
                    n-=o;
                    o=0;
                }
                else
                {
                    n-=x;
                    o-=x;
                }
            }
            
            m--;
        }
        
        if(n>0)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
}