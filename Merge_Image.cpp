#include<iostream>
#include "main.h"
using namespace std;
/**
 * MergeImage - function will merge two image by taking the half of pixels of from every and merge them together
 * 
 * Return : no return value
 * 
*/

// 3 merge Filter
void mergeFilter(void) {

  char imageFileName2[100];

  // Get the another image
  cout << "Please enter name of image file to merge with: ";
  cin >> imageFileName2;

  unsigned char image2[SIZE][SIZE];
    
  // Add to it .bmp extension and load image
  strcat (imageFileName2, ".bmp");
  readGSBMP(imageFileName2, image2);



    unsigned char merged_image[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
      // merge the two images => the the half of the pixel from every image (image1pixel[0] = 1 and image2Pixel[0] = 1  => ((1/2 + 1/2) => (.5 + .5) => or (2/2) = 1)
      merged_image[i][j] = (image[i][j] + image2[i][j]) / 2;
    }
  }

  // Copy the merged_image back to the image array
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      image[i][j] = merged_image[i][j];
    }
  }
}
