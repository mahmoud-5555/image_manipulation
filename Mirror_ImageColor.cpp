#include"main.h"

/**
 * mirrorImage - mirroring part of the images which user entered
 * @load : load image
 * @side : get the side
 * Return : No value to return 
 */


void mirrorImage()
{

  char side;
  bool flag = false;
  cout << "Mirror (l)eft, (r)ight, (u)pper, (d)own side?";

  while (!flag)
  {
    cin >> side;
    switch (side)
    {
    case 'l':
      for (int i = 0; i < SIZE; i++)
      {
        for (int j = 0; j < SIZE / 2; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            image[i][SIZE - j - 1][color] = image[i][j][color];
          }
        }
      }
      flag = true;
      break;

    case 'r':
      for (int i = 0; i < SIZE; i++)
      {
        for (int j = 0; j < SIZE / 2; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            image[i][j][color] = image[i][SIZE - j - 1][color];
          }
        }
      }
      flag = true;
      break;
    case 'u':
      for (int i = 0; i < SIZE; i++)
      {
        for (int j = 0; j < SIZE; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            image[SIZE - i - 1][j][color] = image[i][j][color];
          }
        }
      }
      flag = true;
      break;
    case 'b':
      for (int i = 0; i < SIZE / 2; i++)
      {
        for (int j = 0; j < SIZE; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            image[i][j][color] = image[SIZE - i - 1][j][color];
          }
        }
      }
      flag = true;
      break;
    default:
      cout << "Invaild value";
    }
  }
}
