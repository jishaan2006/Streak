//27. Longest common prefix
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of strings :");
    scanf("%d",&n);
    printf("Enter %d Strings :",n);
    
    char str[10][100];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    char ans[100];
    int c=0;
    int cut=0;
    for(int i=0;str[0][i]!='\0';i++){
        for(int j=1;j<n;j++){
            if(str[0][i] != str[j][i]){
                cut=1;
                break;
            }
        }
        if(cut){
            break;
        }
        ans[c++]=str[0][i];
    }
    printf("Longest common prefix :");
    for(int i=0;i<c;i++){
        printf("%c",ans[i]);
    }
}