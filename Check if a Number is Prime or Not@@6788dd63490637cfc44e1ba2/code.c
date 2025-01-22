#include <stdio.h>
int prime(int a) {
    if(a == 0 ||a == 1 || a == 2) {
        printf("Prime");
    } else {
        int c = 0;
        for (int i = 2;i<a;i++) {
            if (a%i == 0){
                c++;
            }
        }
        if (c == 0){
            printf("Prime");
        } else {
            printf("Not Prime");
        }

        

    }
}
int main() {
    int a;
    scanf("%d",&a);
    prime(a);
}






