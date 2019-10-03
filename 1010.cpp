#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,m,n,cas=1;

    cin>>t;

    while(t--){
        cin>>m>>n;

        cout<<"Case "<<cas<<": ";
        cas++;

        ll x = m*n;

        if(x%2==0){
            cout<<x/2<<endl;
        }
        else
            cout<<(x/2)+1<<endl;
    }

}
