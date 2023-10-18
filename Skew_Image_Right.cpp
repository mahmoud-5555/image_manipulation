#include<iostream>
#include "main.h"
using namespace std;



/**
 *
 * skewImageRight: skew image to right by specific then shrink to into of the frame of the image
 *
 * Return : no return value
 *
*/



void skewImageRight()
{
  int degree;
  cout << "Enter Degree to skew image to right: ";
  cin >> degree;

  double deg = (degree * M_PI / 180.0);
  double move = (tan(deg) * 256);
  double step = move / SIZE;
  if (int(move) <= 0)
  {
    move = 256;
    step = 0;
  }


  int newSize = SIZE + int(move);
  unsigned char skewedImage[SIZE][newSize];

  for (int j = 0; j < SIZE + int(move); j++)
  {
    for (int i = 0; i < SIZE; i++)
    {

      skewedImage[i][j] = 255;
    }
  }

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      skewedImage[i][j + int(move)] = image[i][j];
    }

    // decrease the skew degree every time we get down through image columns
    move -= step;
  }

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      image[i][j] = skewedImage[i][j];
    }
  }


  // Calculate the shrink factor based on the degree
  double shrinkFactor = 1.0 / (tan(degree * M_PI / 180.0) + 1);

  // Calculate the new width
  int newWidth = int(SIZE / shrinkFactor);

  unsigned char shrunkImage[SIZE][SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      // Map the pixel from the original image to the shrunk image
      int originalX = int(j / shrinkFactor);
      if (originalX >= 0 && originalX < newSize)
      {
        image[i][j] = skewedImage[i][originalX];
      }
    }
  }
}
