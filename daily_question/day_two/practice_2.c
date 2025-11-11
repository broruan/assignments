#include<stdio.h>
int main(){
    int n,k,num,a;
    scanf("%d %d",&n,&k);
    for(int i=1;;i++){
    a = n-i*k+i;
    if(a<k){
        num = i;
        break;
    }
    else continue;
    }
    printf("%d",num+n);
    return 0;
}