#include "main.h"
using namespace std;

/**
 * Invert - subtract 255 from every pixel to get the ones complement of the color
 * 
 * Return : no return value
 * 
*/

void Invert()
{
  for (int i = 0; i < 256; i++)
  {
    for (int j = 0; j < 256; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        image[i][j][color] = 255 - image[i][j][color];
      }
    }
  }
}


