#include <stdio.h>
#include <string.h>
#include <math.h>

void lcs (char str1[20], char str2[20]){
    char subseq[20];
    int board[20][20];
    int n=strlen(str1);
    int m=strlen(str2);
    for (int i=0; i<=n;i++){
        board[i][0]=0;
    }
    for (int j=0; j<=m;j++){
        board[0][j]=0;
    }
    int count=0;
    for (int i=1; i<=n;i++){
        for (int j=1; j<=m; j++){
            if (str1[i-1]==str2[j-1]){
                board[i][j]=board[i-1][j-1]+1;
                subseq[count]=str1[i-1];
                count++;
            }
            else{
                board[i][j]=fmax(board[i-1][j+1],board[i][j-1]);
            }
        }
    }
    if (strlen(subseq)==0){
        printf("NO matching pattern");
    }
    else{
        printf("LCS IS %s, which is %d characters long", subseq, count);
    }
}

int main(){
    char str1[20]; char str2[20];
    printf("Enter two strings:\n");
    gets(str1);
    gets(str2);
    lcs(str1,str2);

}