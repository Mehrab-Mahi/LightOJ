#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    double pi = 2 * acos (0.0),r,a,b;

    int t;

    cin>>t;

    for(int i = 1;i<=t;i++){
        cin>>r;
        a =4*r*r;
        b = pi*r*r;

        printf("Case %d: %.2f\n",i,a-b);
    }

}
