//25. Check if two strings are anagrams
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    int freq1[256]={0};
    printf("Enter first string:\n");
    scanf("%s",str1);
    int len1=strlen(str1);

    char str2[100];
    int freq2[256]={0};
    printf("Enter second string:\n");
    scanf("%s",str2);
    int len2=strlen(str2);

    for(int i=0;i<len1;i++){
        freq1[str1[i]]++;
    }

    for(int i=0;i<len2;i++){
        freq2[str2[i]]++;
    }

    int flag=1;
    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            flag=0;
            break;
        }
    }

    if (flag)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");


    return 0;

}