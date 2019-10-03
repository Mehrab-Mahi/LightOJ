#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    int t,n,s=0;

    cin>>t;

    for(int x = 1;x<=t;x++){

        cin>>n;
        s = 0;

        int a[n],tot,index;

        for(int i = 0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n-1;j++){
                tot = a[i]+a[j];
                index = upper_bound(a,a+n,tot-1)-a-1;
                s+=index-j;

            }
        }

        printf("Case %d: %d\n",x,s);

    }
}



