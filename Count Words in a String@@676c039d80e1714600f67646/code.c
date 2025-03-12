// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int count = 0;
    int a = strlen(myarr);
    for (int i = 0; i < a; i++) {
        if (myarr[i] != ' ') {
            if (i == 0 || myarr[i - 1] == ' ') {  
                count++;
            }
        }
    }
    printf("%d",count);
}