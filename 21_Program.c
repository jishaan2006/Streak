//21. Reverse a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    int len=strlen(str);
    int flag=1;
    for(int i=0;i<len/2;i++){
        int temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("Reversed string : %s",str);
}