#include <stdio.h>
#include <string.h>

int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    char myarr2[100][100];
    int index=0;
    int word = 0;
    for(int i = 0;myarr[i];i++) {
        if(myarr[i] != ' ') {
            myarr2[index][word] = myarr[i];
            word++;
        }if(myarr[i] == ' ') {
            index++;
            word = 0;
        }
    }
    int max = 1000;
    int finalindex = 0;
    for(int i = 0;i<index+1;i++) {
        if ((strlen(myarr2[i])) < max) {
            max = strlen(myarr2[i]);
            finalindex = i;
        }
    }
    printf("%s",myarr2[finalindex]);
}