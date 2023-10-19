#include<iostream>
#include "main.h"
using namespace std;



/**
 *
 * skewImageRight: rotate Image by to up then shrink to fit into the frame of the image
 *
 * Return : no return value
 *
*/






void skewImageUp()
{
  int degree;
  cout << "Enter Shrink Degree for Width: ";
  cin >> degree;

  double deg = (degree * M_PI / 180.0); // convert skew degree to radian
  double move = (tan(deg) * 256);
  double step = move / SIZE; // Number of steps
  if (int(move) <= 0)
  {
    move = 256;
    step = 0;
  }
  int newSize = SIZE + int(move);
  unsigned char skewedImage[newSize][SIZE][RGB];

  // skew the image by the given degree
  for (int j = 0; j < SIZE; j++)
  {
    for (int i = 0; i < SIZE + int(move); i++)
    {
      for (int color = 0; color < RGB; color++)
      {
        skewedImage[i][j][color] = 255;
      }
    }
  }

  for (int j = 0; j < SIZE; j++)
  {
    for (int i = 0; i < SIZE; i++)
    {
      for (int color = 0; color < RGB; color++)
      {
        skewedImage[i + int(move)][j][color] = image[i][j][color];
      }
    }

    // decrease the skew degree every time we get down through image columns
    move -= step;
  }

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        image[i][j][color] = skewedImage[i][j][color];
      }
    }
  }

  // Calculate the shrink factor based on the degree
  double shrinkFactor = 1.0 / (tan(degree * M_PI / 180.0) + 1);

  // Calculate the new width
  int newWidth = int(SIZE / shrinkFactor);

  unsigned char shrunkImage[SIZE][SIZE][RGB];
  // shrink the image to fit into the image frame
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {

        // Map the pixel from the original image to the shrunk image
        int originalX = int(i / shrinkFactor);
        if (originalX >= 0 && originalX < newSize)
        {
          image[i][j][color] = skewedImage[originalX][j][color];
        }
      }
    }
  }
}