//Program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone.
#include <stdio.h>
#include <math.h>  // For M_PI constant and pow()

// Function prototypes
double volume_cube(double side);
double volume_cuboid(double length, double breadth, double height);
double volume_sphere(double radius);
double volume_cylinder(double radius, double height);
double volume_cone(double radius, double height);

int main() {
    int choice;
    printf("Calculate Volume of Shapes:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Sphere\n");
    printf("4. Cylinder\n");
    printf("5. Cone\n");
    printf("Enter your choice (1-5): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    double side, length, breadth, height, radius, volume;

    switch(choice) {
        case 1:
            printf("Enter side of cube: ");
            scanf("%lf", &side);
            volume = volume_cube(side);
            printf("Volume of Cube = %.2lf\n", volume);
            break;

        case 2:
            printf("Enter length, breadth, height of cuboid: ");
            scanf("%lf %lf %lf", &length, &breadth, &height);
            volume = volume_cuboid(length, breadth, height);
            printf("Volume of Cuboid = %.2lf\n", volume);
            break;

        case 3:
            printf("Enter radius of sphere: ");
            scanf("%lf", &radius);
            volume = volume_sphere(radius);
            printf("Volume of Sphere = %.2lf\n", volume);
            break;

        case 4:
            printf("Enter radius and height of cylinder: ");
            scanf("%lf %lf", &radius, &height);
            volume = volume_cylinder(radius, height);
            printf("Volume of Cylinder = %.2lf\n", volume);
            break;

        case 5:
            printf("Enter radius and height of cone: ");
            scanf("%lf %lf", &radius, &height);
            volume = volume_cone(radius, height);
            printf("Volume of Cone = %.2lf\n", volume);
            break;

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    return 0;
}

// Volume of cube: side³
double volume_cube(double side) {
    return pow(side, 3);
}

// Volume of cuboid: length * breadth * height
double volume_cuboid(double length, double breadth, double height) {
    return length * breadth * height;
}

// Volume of sphere: (4/3) * π * r³
double volume_sphere(double radius) {
    return (4.0/3.0) * M_PI * pow(radius, 3);
}

// Volume of cylinder: π * r² * h
double volume_cylinder(double radius, double height) {
    return M_PI * pow(radius, 2) * height;
}

// Volume of cone: (1/3) * π * r² * h
double volume_cone(double radius, double height) {
    return (1.0/3.0) * M_PI * pow(radius, 2) * height;
}

