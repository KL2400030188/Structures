#include <stdio.h>

// Define a structure for Rectangle
struct Rectangle {
    float length;
    float width;
};

int main() {
    struct Rectangle rect;
    
    // Input rectangle dimensions
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);
    
    // Calculate area and perimeter directly
    float area = rect.length * rect.width;
    float perimeter = 2 * (rect.length + rect.width);
    
    // Output results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    
    // Check if it's a square or rectangle
    if (rect.length == rect.width) {
        printf("It is a square.\n");
    } else {
        printf("It is a rectangle.\n");
    }

    return 0;
}
