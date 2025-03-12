#include <stdio.h>
#include <string.h>
int check(char *myarr,int a) {
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] == myarr[a-1-i];
    }
    printf("%s",myarr2);
}
int main() {
    char myarr[100]; 
    fgets(myarr,100,stdin);
    char myarr2[strlen(myarr)];
    int o = 0;
    for(int i = 0;i<100;i++) {
        if(myarr[i] == ' ') {
            int e = 0;
        } else {
            myarr2[o] = myarr[i];
            o++;
        }
    }
    check(myarr2,o);
}