#include "main.h"

/**
 * ShrinkImage - The function shrink size image to 1/2 or 1/3 or 1/4 
 * 
 * Return : no return value
 * 
*/


// 9- shrink Image

void shrinkImage(void) {
    cout << "Shrink to press 1: (1/2), press 2: (1/3) or press 3:(1/4)?" << '\n';
    int  shrinkSize;
    cin >> shrinkSize;

    int shrink = 1;

    // Calculate the shrink factor based on user input
    if (shrinkSize == 1) {
        shrink = 2;
    } else if (shrinkSize == 2) {
        shrink = 3;
    } else if (shrinkSize == 3) {
        shrink = 4;
    }

    // Calculate the new size of the shrunken image
    int newSize = SIZE / shrink;

    unsigned char shrinked_image[newSize][newSize];

    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
          // shrink image by shift values in columns and rows
            shrinked_image[i][j] = image[i * shrink][j * shrink] ;
        }
    }

    // Copy the shrunken image back to the original image
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            image[i][j] = shrinked_image[i][j];
        }
    }

    // Fill the remaining portion of the original image with white color (255)
    for (int i = newSize; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            image[i][j] = 255;
        }
    }

    for (int j = newSize; j < SIZE; j++) {
        for (int i = 0; i < SIZE; i++) {
            image[i][j] = 255;
        }
    }
}

