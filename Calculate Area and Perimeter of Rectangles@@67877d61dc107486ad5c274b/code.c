// Your code here...#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    int side1;
    int side2;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%d %d",&students[i].side1,students[i].side2);
    }
}