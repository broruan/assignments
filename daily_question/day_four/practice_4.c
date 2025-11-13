#include<stdio.h>
#include<string.h>
// bool wit(char* a){
//     if(*a=='Y') return true;
//     if(*a=='N') return false;
// }
struct Students{
    char name[20];
    int final_ave;
    int clas;
    char senior;
    char west;
    int thesis;
    int num;
};
int main(){
    int N,result=0,All=0;
    char n[20];
    scanf("%d",&N);
    struct Students std[N];
    for(int i=0;i<N;i++){
        scanf("%s %d %d %c %c %d",
            std[i].name,
            &std[i].final_ave,
            &std[i].clas,
            &std[i].senior,
            &std[i].west,
            &std[i].thesis
    );
    std[i].num = 0;
    }
    for(int i=0;i<N;i++){
        if(std[i].final_ave>80){
            if(std[i].thesis>=1) std[i].num += 8000;
        }
        if(std[i].final_ave>85){
            if(std[i].clas>80) std[i].num += 4000;
            if(std[i].west=='Y') std[i].num += 1000;
        }
        if(std[i].clas>80 && std[i].senior=='Y') std[i].num += 850;
        if(std[i].final_ave>90) std[i].num += 2000;
    }
    for(int i=0;i<N;i++){
        if(std[i].num>result) result = std[i].num;
        All += std[i].num;
    }
    for(int i=0;i<N;i++){
        if(result==std[i].num) {
            strcpy(n,std[i].name);
            break;
        }
    }
    printf("%s\n%d\n%d",n,result,All);
    return 0;
}