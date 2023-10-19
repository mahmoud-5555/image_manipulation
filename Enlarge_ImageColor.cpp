#include "main.h"
using namespace std;



/**
 *
 * enlargeImage: the function ask the user what part the image that he want to make it larger
 *
 * Return : no return value
 *
*/






void enlargeImage()
{

  // variable store the quarter that user want to enlarge

  int enlargeQuarter;

  // print message to user to ask him which quarter he want to enlarge
  cout << "Which quarter to enlarge 1, 2, 3 or 4?";

  // make user Enter the quarter that he want to enlarge
  cin >> enlargeQuarter;

  // x : represent left - middle - right
  // y : represent bottom - middle - top
  int x, y;

  // first quarter start  at x = 0 (left); y = 0 (top); => top-left
  if (enlargeQuarter == 1)
  {
    x = y = 0;
  }

  // second quarter start at x = 0 (left); y = SIZE / 2 (middle) => middle-left
  else if (enlargeQuarter == 2)
  {
    x = 0;
    y = SIZE / 2;
  }

  // third quarter start at x = SIZE / 2 (middle); y = 0 (top) => top-middle
  else if (enlargeQuarter == 3)
  {
    x = SIZE / 2;
    y = 0;
  }

  // x = SIZE / 2 (middle); y = SIZE / 2 (middle); => middle-middle
  else if (enlargeQuarter == 4)
  {
    x = y = SIZE / 2;
  }

  // to store enlarged it image in another array
  unsigned char enlargedImage[SIZE][SIZE][RGB];

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        // quarter larger three time to fill the frame of  the image
        enlargedImage[i][j][color] = image[x + i / 2][y + j / 2][color];
      }
    }
  }

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        image[i][j][color] = enlargedImage[i][j][color];
      }
    }
  }
}