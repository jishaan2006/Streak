//23. Remove duplicates from a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:\n");
    scanf("%s",str);
    int len=strlen(str);

    char result[100];
    int c=0;
    for(int i=0;i<len;i++){
        int flag=0;
        for(int j=0;j<c;j++){
        if(str[i]==result[j]){
            flag=1;
            break;
        }
    }
        if(flag==0){
            result[c++]=str[i];
        }
    }
    result[c]='\0';
    printf("After removing duplicate characters : %s",result);
}