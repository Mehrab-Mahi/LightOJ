#include<bits/stdc++.h>
#define ll unsigned long long int
#define pb push_back

using namespace std;

ll fac(ll n){
    if(n==0){
        return 1;
    }

    if(n>1){
        return n*fac(n-1);
    }
}

int main()
{
    ll t,n,k;

    cin>>t;

    for(int c = 1;c<=t;c++){

        cin>>n>>k;

        if(k>n){
            printf("Case %d: 0\n",c);
        }
        else{
            ll x = 1;

            ll a = k,b = n-k;

            if(a<b){
                swap(a,b);
            }

            int m = a+1;

            for(int i = m;i<=n;i++){
                x = x * i;
            }

            ///cout<<x<<endl;
            ll s = 1 ,p = n;

            for(int i = 0;i<k;i++){
                s = s*p;
                p--;
            }


            printf("Case %d: ",c);
            cout<<(s*x)/fac(b)<<endl;
        }
    }
}
