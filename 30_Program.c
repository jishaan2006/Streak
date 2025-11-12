//30. Valid Palindrome after removing at most one character
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool ispalindrome(char str[],int left,int right){
    while (left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool palindrome(char str[]){
    int len=strlen(str);
    int left=0;
    int right=len-1;

    while(left<right){
        if(str[left]==str[right]){
            left++;
            right--;
        }else{
            return ispalindrome(str,left+1,right)||ispalindrome(str,left,right-1);
        }
    }
    return true;
}


int main(){
    char str[100];
    printf("Enter a String :");
    scanf("%s",str);
    int l=strlen(str);
    if(palindrome(str)){
        printf("Yes it can be palindrome after removing a character");
    }else{
        printf("No it cannot be a palindrome after removing a character");
    }
    return 0;
}