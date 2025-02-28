// #include <stdio.h>
// #include <stdlib.h>
// void prime(int a);
// int main() {
//     int a;
//     scanf("%d",&a);
//     int *myarr = malloc(a*(sizeof(int)));
//     for(int p = 0;p<a;p++) {
//         scanf("%d",&myarr[p]);
//     }
//     for(int y = 0;y<a;y++) {
//         prime(myarr[y]);
//     }
// }
int isPrime(int a) {
    int e;
    for(int i = 2;i<a;i++) {
        if(a%i == 0) {
            printf("0 \n");
            e++;
        }
    }
    if((a == 0) || (a == 1)) {
        printf("0 \n");
    } else if((a == 2) || (e == 0)) {
        printf("1 \n");
    }
}