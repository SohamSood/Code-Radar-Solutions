// Your code here...
#include <stdio.h>
int main() {
    int a = 100;

    char *myarr[100];
    scanf("%s",&myarr);
    int count = 0;
    for(int i = 0;i<a;i++) {
        int e = 0;
        for(int j =i+1;j<a;j++) {
            if(myarr[i] == myarr[j]) {
                e++;
            }
        }
        printf(" %d %c \n",e,myarr[i])
        // if((e == 0)&&(count == 0)) {
        //     count++;
        //     printf("%c",myarr[i]);
        // }
    }
}