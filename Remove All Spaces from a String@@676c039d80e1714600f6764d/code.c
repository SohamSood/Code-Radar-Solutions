// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    for(int i = 0;i<100;i++) {
        if(myarr[i] == ' ') {

        } else {
            printf("%c",myarr[i]);
        }
    }
}