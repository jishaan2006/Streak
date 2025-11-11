//34. Check if a string is a rotation of another string
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    printf("Enter first string :");
    scanf("%s",str1);

    printf("Enter second string :");
    scanf("%s",str2);

    int l1=strlen(str1);
    int l2=strlen(str2);

    if(l1!=l2){
        printf("Not rotation");
        return 0;
    }
    
    int rotation=0;
    
    for(int i=0;i<l1;i++){
        int match=1;
        for(int j=0;j<l1;j++){
            if(str1[j]!=str2[(i+j)%l1]){
                match=0;
                break;
            }
        }
        if (match) {
            rotation= 1;
            break;
        }
    }
    if(rotation){
        printf("Rotation");
    }
    else{
        printf("Not a rotation");
    }
    
}