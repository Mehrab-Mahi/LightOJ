#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    double r1,r2,h,p,v,m;
    int t;

    cin>>t;

    for(int x = 1;x<=t;x++){

        cin>>r1>>r2>>h>>p;

        v = 3.1416*r1*r1*p;

        m = (1/3)*3.1416*(r1-r2)*(r1-r2)*p;

        cout<<v-2*m<<endl;
    }
}

