// Your code here...
#include <stdio.h>
#include <string.h>
int reverse(char myarr[]) {
    int a = strlen(myarr);
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] = myarr[a-i];
    }
    printf("%s ",myarr2);
}
int main() {
    char myarr[100];
    char myarr2[100][100];
    fgets(myarr,100,stdin);
    int word = 0;
    int index = 0;
    int a = strlen(myarr);
    for(int i = 0;i<a;i++) {
        if(myarr[i] != ' ') {
            myarr2[index][word] = myarr[i];
            word++;
        }
        else if(myarr[i] == ' ') {
            index++;
            word = 0;
        }
    }
    for(int i = 0;i<index+1;i++) {
        reverse(myarr2[i]);
    }
}