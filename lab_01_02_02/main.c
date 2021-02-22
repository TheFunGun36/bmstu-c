#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //float inaccuracy = 1e-10f;

    float point1_x, point1_y;
    float point2_x, point2_y;
    float point3_x, point3_y;

    printf("info\n");

    scanf("%f%f", &point1_x, &point1_y);
    scanf("%f%f", &point2_x, &point2_y);
    scanf("%f%f", &point3_x, &point3_y);

    float side1, side2, side3;

    float distance_x = abs(point1_x - point2_x);
    float distance_y = abs(point1_y - point2_y);
    side1 = sqrt(distance_x * distance_x + distance_y * distance_y);

    distance_x = abs(point2_x - point3_x);
    distance_y = abs(point2_y - point3_y);
    side2 = sqrt(distance_x * distance_x + distance_y * distance_y);

    distance_x = abs(point1_x - point3_x);
    distance_y = abs(point1_y - point3_y);
    side3 = sqrt(distance_x * distance_x + distance_y * distance_y);

    if (side1 + side2 <= side3 ||
        side2 + side3 <= side1 ||
        side1 + side3 <= side2)
    {
        return -1;
    }

    float perimeter = side1 + side2 + side3;

    printf("%f\n", perimeter);
    
    return 0;
}
