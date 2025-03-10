#include <stdio.h> 
#include <stdlib.h> // Your code here...
struct student{
        int b;
        char c[100];
        float d;
    };
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student *)malloc(a * sizeof(struct student));

}