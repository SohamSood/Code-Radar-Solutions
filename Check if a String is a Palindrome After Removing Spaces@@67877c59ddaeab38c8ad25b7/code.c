#include <stdio.h>
#include <string.h>
int check(char *myarr,int a) {
    char myarr2[a];
    for(int i = 0;i<a;i++) {
        myarr2[i] = myarr[a-1-i];
    }
    if ((strcmp(myarr,myarr2)) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    for(int i = 0;i<a;i++) {
        printf("%c %c \n",myarr[i],myarr2[i]);
    }
}
int main() {
    char myarr[100]; 
    fgets(myarr,100,stdin);
    char myarr2[strlen(myarr)];
    int o = 0;
    for(int i = 0;i < strlen(myarr);i++) {
        if(myarr[i] == ' ') {
            int e = 0;
        } else {
            myarr2[o] = myarr[i];
            o++;
        }
    }
    check(myarr2,o);
}