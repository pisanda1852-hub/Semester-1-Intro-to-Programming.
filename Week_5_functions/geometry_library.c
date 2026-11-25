#include <stdio.h>
#define PI 3.14159
double areaOfCircle(double radius) {
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 0.0;
    }
    return PI * radius * radius;
}
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        printf("Error: Length and width cannot be negative.\n");
        return 0.0;
    }
    return length * width;
}
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        printf("Error: Base and height cannot be negative.\n");
        return 0.0;
    }
    return 0.5 * base * height;
}
void displayMenu(void) {
    printf("\nGEOMETRY CALCULATOR\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}
int main(void) {
    int choice;
    double radius, length, width, base, height, area;
    do {
        displayMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        switch (choice) {
            case 1:
                printf("Enter radius: ");
                if (scanf("%lf", &radius) != 1) {
                    printf("Invalid input.\n");
                    return 1;
                }
                area = areaOfCircle(radius);
                printf("Area of circle: %.2f\n", area);
                break;
            case 2:
                printf("Enter length: ");
                if (scanf("%lf", &length) != 1) {
                    printf("Invalid input.\n");
                    return 1;
                }
                printf("Enter width: ");
                if (scanf("%lf", &width) != 1) {
                    printf("Invalid input.\n");
                    return 1;
                }
                area = areaOfRectangle(length, width);
                printf("Area of rectangle: %.2f\n", area);
                break;
            case 3:
                printf("Enter base: ");
                if (scanf("%lf", &base) != 1) {
                    printf("Invalid input.\n");
                    return 1;
                }
                printf("Enter height: ");
                if (scanf("%lf", &height) != 1) {
                    printf("Invalid input.\n");
                    return 1;
                }
                area = areaOfTriangle(base, height);
                printf("Area of triangle: %.2f\n", area);
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    return 0;
}
