#include"main.h"

/**
 * shrinkImage - shrinking an image with a certian size
 * @load : load image
 * @shrinkSize : get size to shrink 
 * Return : No value to return 
 */

void shrinkImage()
{
  cout << "Shrink to press 1: (1/2), press 2: (1/3) or press 3:(1/4)?" << '\n';
  int shrinkSize;
  cin >> shrinkSize;

  int shrink = 1;

  // Calculate the shrink factor based on user input
  if (shrinkSize == 1)
  {
    shrink = 2;
  }
  else if (shrinkSize == 2)
  {
    shrink = 3;
  }
  else if (shrinkSize == 3)
  {
    shrink = 4;
  }

  // Calculate the new size of the shrunken image
  int newSize = SIZE / shrink;

  unsigned char shrinked_image[newSize][newSize][RGB];

  for (int i = 0; i < newSize; i++)
  {
    for (int j = 0; j < newSize; j++)
    {
      // shrink image by shift values in columns and rows
      for (int color = 0; color < RGB; color++)
      {
        shrinked_image[i][j][color] = image[i * shrink][j * shrink][color];
      }
    }
  }

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        image[i][j][color] = 255;
      }
    }
  }

  // Copy the shrunken image back to the original image
  for (int i = 0; i < newSize; i++)
  {
    for (int j = 0; j < newSize; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        image[i][j][color] = shrinked_image[i][j][color];
      }
    }
  }
}

int flip_image()
{
  bool filp_image_cancel = false;

  while (!filp_image_cancel)
  {
    cout << "press 'h' to flip horizontall or press 'v' to flip verticall \n";
    char flip;
    cin >> flip;

    switch (flip)
    {
    case 'h': // flip the rows for horizontall

      for (int i = 0; i < SIZE; i++)
      {
        for (int j = 0; j < SIZE / 2; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            swap(image[i][j][color], image[i][SIZE - 1 - j][color]);
          }
        }
      }

      return (0);
      break;

    case 'v': // flip the columns for verticall

      for (int i = 0; i < SIZE / 2; i++)
      {
        for (int j = 0; j < SIZE; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            swap(image[i][j][color], image[SIZE - 1 - i][j][color]);
          }
        }
      }

      return (0);
      break;

    default:
      char ordar_filp_image_cancel;

      cout << "invalid input please try again by press any key or use 'c' to cancle \n";
      cin >> ordar_filp_image_cancel;
      if (ordar_filp_image_cancel == 'c')
      {
        cout << "canceled";
        return (1);
      }

      break;
    }
  }
}

