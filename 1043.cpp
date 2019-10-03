#include<bits/stdc++.h>
#define optimiza_io  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimiza_io;

    int t;
    cin>>t;

    for(int i = 1;i<=t;i++){

    double a,b,c,r,x;

    cin>>a>>b>>c>>r;

    x = 1/((1/r)+1);

    x = sqrt(x);
    //cout<<x<<endl;

    printf("Case %d: %.8f\n",i,a*x);

    }

}
