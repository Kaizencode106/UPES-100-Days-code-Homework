/*
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/
#include <stdio.h>
int main() {
    float  length, breadth;
    float area, perimeter;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
  area = length * breadth; // area = length * breadth
    perimeter = 2 * (length + breadth); // perimeter = 2 * (length + breadth)    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    return 0;
    //  return 0 indicate that the program ended successfully}
    }
    /*
    i am writing these instruction so i can understand the code better
    to revise or learn from it in future . see what my mistake is .
    */