#include<iostream>
#include "main.h"
using namespace std;

/*
*InvertBW: invert mage to black and white
*@Load: image
*Always return 0(successfull)
*/

void blackWhiteFilter()
{
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {

        if (image[i][j][color] < 127)
          image[i][j][color] = 0;
        else
          image[i][j][color] = 255;
      }
    }
  }
}