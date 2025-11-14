#include<stdio.h>
int max(int* a,int* b){
    return ((*a)>(*b))?(*a):(*b);
}
int main(){
    int T,M,a;
    scanf("%d %d",&T,&M);
    //M是物品编号，T是背包容量
    int dp[M+1][T+1],vi[M],value[M];
    for(int i=0;i<M;i++){
        scanf("%d %d",&vi[i],&value[i]);
    }
    //初始化
    for(int i=0;i<=M;i++) dp[i][0] = 0;
    for(int f=0;f<=T;f++) dp[0][f] = 0;

    for(int i=1;i<=M;i++)
        for(int f=0;f<=T;f++){
            if(f<vi[i-1]) dp[i][f] = dp[i-1][f];
            else{
                a = value[i-1]+dp[i-1][f-vi[i-1]];
                dp[i][f] = max(&dp[i-1][f],&a);
            }
    }
    printf("%d",dp[M][T]);
    return 0;

}