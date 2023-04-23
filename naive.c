#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void string_match(char *text, char *pattern){
    int len1,len2,i,j,count=0;
    len1 = strlen(text);
    len2 = strlen(pattern);
    if(len2>len1){
        printf("Pattern cannot be longer than the original text.");
        return;
    }
    for(i=0;i<len1-len2;i++){
        for(j=0;j<len2;j++){
            if(text[i+j]==pattern[j])
                count++;

        }
        if(count==len2-1)
            printf("position:%d\t",i+1);
            count=0;
    }
}
int main(){
    char str1[50],str2[50];
    printf("\t\tNaive String Matching\n");
    printf("Enter the original text:");
    fgets(str1,50,stdin);
    printf("Enter the pattern to be matched:");
    fgets(str2,50,stdin);
    string_match(str1,str2);
    return 0;
}