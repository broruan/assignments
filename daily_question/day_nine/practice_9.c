#include<stdio.h>
int main(){
    int a[6],count=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        if(i==0){
            a[1] = a[1] + a[0]/3;
            a[4] = a[4] + a[0]/3;
            count += (a[0]-a[0]/3*3);
            // printf("count:%d\n",count);
            a[0] = a[0]/3;
            // printf("a[0]:%d\n",a[0]);
        }
        else if(i==4){
            // printf("a[0]2:%d\n",a[0]);
            a[0] = a[0] + a[4]/3;
            a[3] = a[3] + a[4]/3;
            count += (a[4]-a[4]/3*3);
            a[4] = a[4]/3;
        }
        else{
            a[i+1] += a[i]/3;
            a[i-1] += a[i]/3;
            count += (a[i]-a[i]/3*3);
            a[i] = a[i]/3;
            // printf("a[%d]:%d\n",i,a[i]);
        }

    }
    for(int i=0;i<5;i++){
        if(i<4) printf("%d ",a[i]);
        else printf("%d\n",a[i]);
    }
    printf("%d",count);
    return 0;

}