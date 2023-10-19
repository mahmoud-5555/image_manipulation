#include "main.h"

/**
 * MergeImage - function will merge two image by taking the half of pixels of from every image and add (merge) them together
 * 
 * Return : no return value
 * 
*/

void mergeFilter()
{

  char imageFileName2[100];

  // Get the another image
  cout << "Please enter name of image file to merge with: ";
  cin >> imageFileName2;

  unsigned char image2[SIZE][SIZE][RGB];

  // Add to it .bmp extension and load image
  strcat(imageFileName2, ".bmp");
  readRGBBMP(imageFileName2, image2);

  unsigned char merged_image[SIZE][SIZE][RGB];
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      // loop throgh colors (Red = 0, blue = 1, Green = 2)
      for (int color = 0; color < RGB; color++)
      {
        merged_image[i][j][color] = image[i][j][color] + image2[i][j][color];
      }
    }
  }

  // Copy the merged_image back to the image array
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      // loop throgh colors (Red = 0, blue = 1, Green = 2)
      for (int color = 0; color < RGB; color++)
      {
        image[i][j][color] = merged_image[i][j][color];
      }
    }
  }
}
