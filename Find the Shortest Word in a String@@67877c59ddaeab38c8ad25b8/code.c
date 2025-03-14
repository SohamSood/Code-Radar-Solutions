#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    char myarr2[100][100];
    int index=0;
    int word = 0;
    for(int i = 0;myarr[i],i++) {
        if(myarr[i] != ' ') {
            myarr2[index][word] = myarr[i];
            word++;
        }if(myarr2[i] == ' ') {
            index++;
        }
    }
    for(int i = 0;i<100;i++) {
        printd("%s \n",myarr2[i]);
    }
}