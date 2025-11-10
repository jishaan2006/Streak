// 28. Convert string to integer
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a String (numbers only):");
    scanf("%s", str);
    int l=strlen(str);
    int result =0;
    for(int i=0;i<l;i++){
        result=result*10+(str[i]-'0');
    }
    printf("%d",result);
    return 0;
}