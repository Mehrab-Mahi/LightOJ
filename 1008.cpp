#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll n,t,cas=1;

    cin>>t;

    while(t--){
        cout<<"Case "<<cas<<": ";
        cas++;

        cin>>n;

        if(n==1)
            cout<<1<<" "<<1<<endl;
        else if(n==2)
            cout<<1<<" "<<2<<endl;
        else if(n==3)
            cout<<2<<" "<<2<<endl;
        else if(n==4)
            cout<<2<<" "<<1<<endl;
        else{
            ll m = sqrt(n);

            if(m*m==n)
                m = m;
            else
                m++;

            ll ache = 2*m+5 - 6;

            if(m%2==1){
                ll start = m*m - ache+1;

                ll showa = ache/2;

                if(n<=start+showa){
                    cout<<m<<" "<<n-start+1<<endl;
                }
                else{
                    cout<<m*m-n+1<<" "<<m<<endl;
                }
            }
            else{
                ll start = (m-1)*(m-1)+1;

                ll khara = ache/2;

                if(n<=start+khara){
                    cout<<n-start+1<<" "<<m<<endl;
                }
                else{
                    cout<<m<<" "<<m*m-n+1<<endl;

                }

            }

        }
    }

}
