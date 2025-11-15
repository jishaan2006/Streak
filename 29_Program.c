//29. Implement strstr() (substring search)
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    printf("Enter a String :");
    scanf("%s",str1);
    int len1=strlen(str1);
    char str2[100];
    printf("Enter string to find :");
    scanf("%s",str2);
    int len2=strlen(str2);

    for(int i=0;i<=len1-len2;i++){
        int j=0;
        while(j<len2 && str1[i+j]==str2[j]){
            j++;
        }
        if(j==len2){
            printf("Substring found at index %d",i);
            return 0;
        }
    }
    printf("Substring not found\n");
    return 0;
}