// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    int no[100];
    char name[100];
    float marks;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%s %s %f",students[i].no,students[i].name,&students[i].marks);
    }
    float car = 0;
    float bike = 0;
    float truck = 0;
    for(int i = 0;i<a;i++) {
        if((strcmp(students[i].name, "Car")) == 0) {
            car++;
        }
        if((strcmp(students[i].name, "Bike")) == 0) {
            bike++;
        }
        if((strcmp(students[i].name, "Truck")) == 0) {
            truck++;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car,bike,truck);
}