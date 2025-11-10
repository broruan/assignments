#include<stdio.h>
int main(){
    int n=1,k;
    double s=0;
    scanf("%d",&k);
    for(int i=1;i<=n;i++){
        s += (double)1/i;
        if(s>k) break;
        n++;
    }
    printf("%d",n);
    return 0;

}