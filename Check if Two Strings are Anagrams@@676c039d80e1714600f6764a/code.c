#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    int e = 0;
    for(int i = 0;i<strlen(a);i++) {
        for(int j = 0;j<strlen(b);j++) {
            if(a[i] == b[j]) {
                e++;
                break;
            }
        }
    }
    if((int)strlen(a) == (int)strlen(b) == e)  {
        printf("Yes");
    } else {
        printf("No");
    }
}