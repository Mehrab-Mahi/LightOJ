#include<bits/stdc++.h>
#define mx 100005
#define ll long long int

using namespace std;

int tree[mx*4],arr[mx];

ll result(ll a,ll b){
    return a+b;
}

void init(int node,int b , int e){
    if(b==e){
        tree[node] = arr[b];
        return ;
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = 2*node +1;

    init(left,b,mid);
    init(right,mid+1,e);

    tree[node] = result(tree[left],tree[right]);
    //cout<<"  "<<tree[node]<<endl;
}


void update(int node,int b , int e,int i , int value){
    if(i<b || i>e)
        return ;
    if(i<=b && i>=e){
        tree[node]+= value;
        //cout<<"  "<<tree[node]<<" "<<node<<" "<<i<<" "<<b<<" "<<e<<endl;
        return;
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = 2*node +1;

    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);

    tree[node] = result(tree[left],tree[right]);
}


void updateZero(int node,int b, int e,int i){
    if(i<b || i>e)
        return ;
    if(i<=b && i>=e){
        int temp = tree[node];
        tree[node] = 0;
        printf("%d\n",temp);
        return ;
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = 2*node +1;

    updateZero(left,b,mid,i);
    updateZero(right,mid+1,e,i);

    tree[node] = result(tree[left],tree[right]);
}


ll query(int node, int b , int e, int i , int j){
    if(i>e || j <b){
        return 0;
    }
    if(i<=b && j>=e){
            //cout<<"  "<<node<<endl;
        return tree[node];
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = 2*node+1;


    ll q1 = query(left,b,mid,i,j);
    ll q2 = query(right,mid+1,e,i,j);

    return result(q1,q2);
}


int main()
{

    int n,t,q,tst=1;

    scanf("%d",&t);

    while(t--){

    scanf("%d %d",&n,&q);

    for(int i = 1;i<=n ; i++)
        scanf("%d",&arr[i]);

    init(1,1,n);
//    for(int i = 1;i<=9;i++)
//        cout<<tree[i]<<" ";
//    cout<<endl;

    printf("Case %d:\n",tst++);

    while(q--){
        int cs,x,y;

        scanf("%d",&cs);

        if(cs==1){
            scanf("%d",&x);
            x++;

            updateZero(1,1,n,x);
        }
        else if(cs==2){
            scanf("%d %d",&x,&y);
            x++;
            update(1,1,n,x,y);
        }
        else{
            scanf("%d %d",&x,&y);
            x++;
            y++;

            ll ans =query(1,1,n,x,y);

            printf("%lld\n",ans);
        }
    }


    }

}
