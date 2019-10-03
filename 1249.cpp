#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,x,y,z,cas=1,n;

    cin>>t;

    while(t--){
        cin>>n;

        string s[n];
        int a[n],aa[n];
        for(int i = 0;i<n;i++){
            cin>>s[i]>>x>>y>>z;

            a[i] = x*y*z;
            aa[i] = a[i];
        }

        sort(aa,aa+n);

        cout<<"Case "<<cas<<": ";
        cas++;

        if(aa[0]==aa[n-1]){
            cout<<"no thief"<<endl;
        }
        else{
            string h,l;
            for(int i = 0;i<n;i++){
                if(aa[n-1]==a[i]){
                    h = s[i];
                    break;
                }
            }

            for(int i = 0;i<n;i++){
                if(aa[0]==a[i]){
                    l = s[i];
                    break;
                }
            }

            cout<<h<<" took chocolate from "<<l<<endl;
        }
    }
}
