#include <stdio.h>
#include <string.h>
struct Shape {
    char colour[20];
};
struct Circle { 
    struct Shape base;
    double radius;
};
int main() {
    struct Circle myCircle;
    strcpy(myCircle.base.colour, "Red");
myCircle.radius = 5.0;
printf("Circle colour (Inherited): %s\n" , myCircle.base.colour);
printf("Circle Radius (Specific): %.2f\n", myCircle.radius);
return 0;
}