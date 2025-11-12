#include<stdio.h>
void swep(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//优化
int mid(int*a,int left,int right){
    int mid = (left+right)/2;
    if(a[mid]<a[right]){
        if(a[right]<a[left]) return right;
        if(a[left]<a[mid]) return mid;
        else return left;
    }
    else{
        if(a[right]>a[left]) return right;
        if(a[left]>a[mid]) return mid;
        else return left;
     }
}//实现中间值为基准值，但还是有一个过不了
int partSort(int* a,int left,int right){
    int key  = left;
    int mi = mid(a,left+1,right-2);
    swep(&a[key],&a[mi]);
    while(left<right){
        while(left<right && a[right]>=a[key]){
            right--;
        }
        while(left<right && a[left]<=a[key]){
            left++;
        }
        if(left<right) swep(&a[left],&a[right]);
    }
    swep(&a[left],&a[key]);
    // key = left;
    return left;
}
void sorted(int* a,int left,int right){
    if(right<=left) return;
    int key = partSort(a,left,right);
    sorted(a,left,key-1);
    sorted(a,key+1,right);
}
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    sorted(a,0,N-1);
    for(int i=0;i<N;i++){
        if(i<N-1){
            printf("%d ",a[i]);
        }
        else printf("%d\n",a[i]);
        
    }
    return 0;
}