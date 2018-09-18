#include <iostream>
using namespace std;
 
typedef long long ll;

int main() {
    
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll ans=0;
        string s;
        cin>>s;
         
        for(ll j=0;j<s.length();j++)
        {
            if(s[j]=='c' || s[j]=='h' || s[j]=='e' || s[j]=='f'){
            bool mark[5]={false,false,false,false};
    for(ll k=j;k<=j+3;k++)
    {
       if(s[k]=='c')
       mark[0]=true;
       else if(s[k]=='h')
       mark[1]=true;
       else if(s[k]=='e')
       mark[2]=true;
       else if(s[k]=='f')
       mark[3]=true;
    }
    
    if(mark[0] && mark[1] && mark[2] &&mark[3])
    ans++;
            }
        }
         
        if(ans>0)
        cout<<"lovely "<<ans<<endl;
        else
        cout<<"normal"<<endl;
    }
}