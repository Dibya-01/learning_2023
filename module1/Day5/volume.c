#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    float area1 = 2 * (boxPtr->length * boxPtr->width);
    float area2 = 2 * (boxPtr->length * boxPtr->height);
    float area3 = 2 * (boxPtr->width * boxPtr->height);
    return area1 + area2 + area3;
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    printf("Enter the length of the box: ");
    scanf("%f", &(boxPtr->length));

    printf("Enter the width of the box: ");
    scanf("%f", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%f", &(boxPtr->height));

    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

    return 0;
}
