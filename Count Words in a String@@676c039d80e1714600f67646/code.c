// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char myarr[100];
    fgets(myarr,100,stdin);
    int count = 0;
    int a = strlen(myarr);
    for(int i = 0;i<a;i++) {
        if(myarr[i] == ' ') {
            for(int j = i+1;j<a;j++) {
                if(myarr[j] == ' ') {
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}