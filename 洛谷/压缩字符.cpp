#include<iostream>
using namespace std;
int main(){
    int a,n,t=0,i=0,b,s=0;
    cin>>n;
    while(s<n*n){
        cin>>a;
        i++;
        for(b=a;b>=1;b--){
            if(t==n){cout<<endl;t=0;}
            if(i%2==1){
                cout<<0;
            }
            else{
                cout<<1;
            }
            t++;
            s++;
        }
    }
    cout<<endl;
    return 0;
}
