// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int a = strlen(myarr);
    for(int i = 0;i<a;i++) {
        if(isupper(myarr[i])) {
            myarr[i] = tolower(myarr[i]); 
        } else if(islower(myarr[i])) {
            myarr[i] = toupper(myarr[i]);
        }
    }
    for(int i = 0;i<a;i++) {
        printf("%c",myarr[i]);
    }
}