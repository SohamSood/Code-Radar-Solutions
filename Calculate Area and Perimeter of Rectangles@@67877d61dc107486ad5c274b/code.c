#include <stdio.h>
#include <stdlib.h>
struct student {
    float side1;
    float side2;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%f %f",&students[i].side1,&students[i].side2);
    }
    for(int i = 0;i<a;i++ ) {
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",i,(students[i].side1)*(students[i].side2),2*((students[i].side1)+(students[i].side2)));
    }
}