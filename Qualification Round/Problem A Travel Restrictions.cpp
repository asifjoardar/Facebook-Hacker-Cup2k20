/********** BiSmIlLaHiR rAhMaNiR rAhIm ***********\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
\*************** DIIT(17th batch) ****************/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define fs first
#define ss second
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define SIZE 1000001
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};
ll ans,n,a[100005];

int main()
{
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        ll n,j,k;
        string in,out;
        cin>>n>>in>>out;
        string ans[n];
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(j==k)
                    ans[j]+='Y';
                else
                    ans[j]+='N';
            }
        }
        for(j=0;j<n;j++){
            ll p=j;
            for(k=j;k<n;k++){
                if(k+1<n and out[p]==in[k+1] and out[p]=='Y'){
                    p=k+1;
                    ans[j][k+1]='Y';
                }
                else
                    break;
            }
        }
        for(j=0;j<n;j++){
            ll p=j;
            for(k=j;k>=0;k--){
                if(k-1>=0 and out[p]==in[k-1] and out[p]=='Y'){
                    p=k-1;
                    ans[j][k-1]='Y';
                }
                else
                    break;
            }
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(j=0;j<n;j++){
            cout<<ans[j]<<endl;
        }
    }
    return 0;
}
