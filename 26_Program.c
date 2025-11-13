//26. Count and say problem
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string :");
    scanf("%s",str);
    

    int len=strlen(str);
    int count =1;
    for(int i=0;i<len-1;i++){
        if(str[i]==str[i+1]){
            count ++;
        }else{
            printf("%d%c",count,str[i]);
            count=1;
        }
    }
    printf("%d%c",count,str[len-1]);
    return 0;
}