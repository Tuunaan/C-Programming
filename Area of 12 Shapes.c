#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, h, r, name;
    float area;
    printf("---Area of a geometrical shape.---\n");
    printf("Enter:\n 1.Square\n 2.Rectangle\n 3.Triangle\n 4.Circle\n 5.Trapezium\n 6.Rhombus\n 7.Parallelogram\n 8.Sphere\n 9.Cylinder\n 10.Cube\n 11.Pyramid\n 12.Cone\n");
    scanf(" %d", &name);

    if (name == 1) // Square
    {
        printf("Enter the side length in meters:\n");
        scanf("%d", &a);
        area = a * a;
        printf("Area of this Square shape is=%.2f\n", area);
    }
    else if (name == 2) // Rectangle
    {
        printf("Enter the length in meters:\n");
        scanf("%d", &a);
        printf("Enter the width in meters:\n");
        scanf("%d", &b);
        area = a * b;
        printf("Area of this Rectangle shape is=%.2f\n", area);
    }
    else if (name == 3) // Triangle
    {
        printf("Enter the base length in meters:\n");
        scanf("%d", &a);
        printf("Enter the height in meters:\n");
        scanf("%d", &b);
        area = 0.5 * a * b;
        printf("Area of this Triangle shape is=%.2f\n", area);
    }
    else if (name == 4) // Circle
    {
        printf("Enter the radius in meters:\n");
        scanf("%d", &r);
        area = 3.1414 * r * r; // Approximation of pi
        printf("Area of this Circle shape is=%.2f\n", area);
    }
    else if (name == 5) // Trapezium
    {
        printf("Enter the lengths of parallel sides (base1 and base2) in meters:\n");
        scanf("%d %d", &a, &b);
        printf("Enter the height in meters:\n");
        scanf("%d", &h);
        area = 0.5 * (a + b) * h;
        printf("Area of this Trapezium shape is=%.2f\n", area);
    }
    else if (name == 6) // Rhombus
    {
        printf("Enter the length of diagonals in meters:\n");
        scanf("%d %d", &a, &b);
        area = 0.5 * a * b;
        printf("Area of this Rhombus shape is=%.2f\n", area);
    }
    else if (name == 7) // Parallelogram
    {
        printf("Enter the base length and the height in meters:\n");
        scanf("%d %d", &a, &h);
        area = a * h;
        printf("Area of this Parallelogram shape is=%.2f\n", area);
    }
    else if (name == 8) // Sphere
    {
        printf("Enter the radius in meters:\n");
        scanf("%d", &r);
        area = 4 * 3.1414 * r * r; // Approximation of pi
        printf("Area of this Sphere shape is=%.2f\n", area);
    }
    else if (name == 9) // Cylinder
    {
        printf("Enter the radius and height in meters:\n");
        scanf("%d %d", &r, &h);
        area = 2 * 3.1414 * r * (r + h); // Approximation of pi
        printf("Area of this / Cylinder shape is=%.2f\n", area);
    }
    else if (name == 10) // Cube
    {
        printf("Enter the side length in meters:\n");
        scanf("%d", &a);
        area = 6 * a * a;
        printf("Area of this Cube shape is=%.2f\n", area);
    }
    else if (name == 11) // Pyramid
    {
        printf("Enter the base length and the height in meters:\n");
        scanf("%d %d", &a, &h);
        area = (a * a) + 2 * a * sqrt((a/2)*(a/2) + h*h); // Using formula for the surface area of a square pyramid
        printf("Area of this Pyramid shape is=%.2f\n", area);
    }
    else if (name == 12) // Cone
    {
        printf("Enter the radius and height in meters:\n");
        scanf("%d %d", &r, &h);
        area = 3.1414 * r * (r + sqrt(h*h + r*r)); // Approximation of pi
        printf("Area of this Cone shape is=%.2f\n", area);
    }
    else
    {
        printf("Invalid shape name entered.\n");
    }

    return 0;
}
