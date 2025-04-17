#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=0,l=0,ans=0;
    for(int z=1;z<=n;z++)
    {
        scanf("%d",&b);
        if(b<a) {
            l=1;
        }
        if(b>a&&l==1) {
            ans++;
            l=0;
        }
        a=b;
    }
    printf("%d",ans);
    return 0;
}