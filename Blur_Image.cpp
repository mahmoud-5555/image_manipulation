#include "main.h"


/**
 * 
 * BlurImage - The function blur the image (make it not clear)  by take every pixel it calculates by take the sum of the neighborhood
 * of the pixel from (left and right and top and bottom) and (right-left right-top right-middle) and (middle-top middle-bottom middle-middle) (left-top left-bottom left-middle)    
 * 
 * Return : no return value
 * 
*/




void blurImage(void) {
    const int KERNEL_SIZE = 3;
    int kernelRadius = KERNEL_SIZE / 2;
    unsigned char blurredImage[SIZE][SIZE];

    for (int x = kernelRadius; x < SIZE - kernelRadius; x++) {
        for (int y = kernelRadius; y < SIZE - kernelRadius; y++) {
            int sum = 0;

            // Calculate the average color value from the all sides (left and right and top and bottom) and 
            // (right-left right-top right-middle) and (middle-top middle-bottom middle-middle) (left-top left-bottom left-middle)
            //  and store it in the variable in sum 
            for (int i = -kernelRadius; i <= kernelRadius; i++) {
                for (int j = -kernelRadius; j <= kernelRadius; j++) {
                    sum += image[x + i][y + j];
                }
            }

            // Calculate the average and assign it to the blurred image
            blurredImage[x][y] = static_cast<unsigned char>(sum / (KERNEL_SIZE * KERNEL_SIZE));
        }
    }
    
    // Copy the blurred image back to the original image
    for (int x = kernelRadius; x < SIZE - kernelRadius; x++) {
        for (int y = kernelRadius; y < SIZE - kernelRadius; y++) {
            image[x][y] = blurredImage[x][y];
        }
    }
}
