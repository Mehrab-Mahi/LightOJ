#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int test,c = 1,n=0,p,y,q,m,nd=0;

    cin>>test;

    string s,t;

    while(test--){
        nd=0;
        cin>>s>>t;
        p = s.size()-1;
        q = t.size()-1;

        for(int x = 0;x<4;x++){

            n = 0;
            y = 0;
            for(int i = p;i>=0;i--){
                if(s[i]=='.'){
                    p = i-1;
                    break;
                }
                int k = pow(10,y);

                if(k%10!=0 && k!=1)
                    k++;

                int d = s[i]-48;

                n= n + (d*k);

                y++;
            }

            m = 0;
            y = 0;
            bitset<8> bs(n);
            int z=0;

            for(int i = q;i>=0;i--){
                if(t[i]-48!=bs[z]){
                    //cout<<t[i]<<" "<<bs[z]<<" "<<i<<endl;
                    nd = 1;
                    break;
                }
                z++;

                if(z==8){
                    q = i;
                    break;
                }
            }
            q = q-2;

            if(nd)
                break;
            //cout<<bs<<endl<<m<<endl;


        }

        if(nd==1){
            printf("Case %d: No\n",c);
        }
        else{
            printf("Case %d: Yes\n",c);
        }

        c++;

    }

}
