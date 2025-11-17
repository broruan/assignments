#include<stdio.h>
int main(){
    int L,N,sum=0,res=0;
    int S,A,B;
    scanf("%d %d",&L,&N);
    int le[L+1];
    for(int i=0;i<L+1;i++) le[i] = 1;
    for(int i=0;i<N;i++){
        scanf("%d %d %d",&S,&A,&B);
        if(S==1){
            for(int f=A;f<=B;++f){
                if(le[f]==0) le[f] = 2;
            }
        }
        else{
            for(int d=A;d<=B;++d){
                if(le[d]==2) sum++;
                le[d] = 0;
            }
        }
    }
    for(int t=0;t<L+1;++t){
        if(le[t]==2) res++;
    }
    printf("%d\n%d",res,sum);
    return 0;
}