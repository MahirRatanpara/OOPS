#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int cnt=0;

        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='0' and s2[i]=='1')
            {
                vis[i]=1;
                s1[i]='2';
                cnt++;
            }
        }

        for(int i=0;i<n;i++)
        {
            
            if(s2[i]=='1' and vis[i]==0)
            {
                if(i>=1 and s1[i-1]=='1')
                {
                    cnt++;
                    s1[i-1]='2';
                }
                else if(i<=n-2 and s1[i+1]=='1')
                {
                    cnt++;
                    s1[i+1]='2';
                }
                vis[i]=1;
            }
        }
        cout<<cnt<<endl;
    }
}