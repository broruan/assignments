#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int N;
    int sum=-9999999;
    scanf("%d",&N);
    int a[N],dp[N];
    for(int i=0;i<N;i++) scanf("%d",&a[i]);
    dp[0] = a[0];
    for(int i=1;i<N;i++){
        dp[i] = max(a[i]+dp[i-1],a[i]);
        sum = max(sum,dp[i]);
    }
    printf("%d",sum);
    return 0;
}