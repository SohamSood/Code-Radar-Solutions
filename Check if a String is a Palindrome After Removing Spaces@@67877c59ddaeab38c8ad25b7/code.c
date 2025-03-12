// Your code here...
#include <stdio.h>
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