#include<iostream>
#include "main.h"
using namespace std;

/**
 * 
 * BlurImage - The function blur the image (make it not clear)  by take every pixel it calculates by take the sum of the neighborhood
 * of the pixel from (left and right and top and bottom) and (right-left right-top right-middle) and (middle-top middle-bottom middle-middle) (left-top left-bottom left-middle)    
 * and calaute it weight to pixel next to it from all the sides
 * Return : no return value
 * 
*/




void blurImage()
{
  const int KERNEL_SIZE = 3;
  int kernelRadius = KERNEL_SIZE / 2;
  unsigned char blurredImage[SIZE][SIZE][RGB];

  for (int x = 0; x < SIZE; x++)
  {
    for (int y = 0; y < SIZE; y++)
    {
      for (int color = 0; color < RGB; color++)
      {
        int sum = 0;
        int count = 0;

        // Calculate the average color value in the local neighborhood
        for (int i = -kernelRadius; i <= kernelRadius; i++)
        {
          for (int j = -kernelRadius; j <= kernelRadius; j++)
          {
            if (x + i >= 0 && x + i < SIZE && y + j >= 0 && y + j < SIZE)
            {
              sum += image[x + i][y + j][color];
              count++;
            }
          }
        }

        // Calculate the average and assign it to the blurred image
        blurredImage[x][y][color] = static_cast<unsigned char>(sum / count);
      }
    }
  }

  // Copy the blurred image back to the original image
  for (int x = 0; x < SIZE; x++)
  {
    for (int y = 0; y < SIZE; y++)
    {
      for (int color = 0; color < RGB; color++)
      {
        image[x][y][color] = blurredImage[x][y][color];
      }
    }
  }
}