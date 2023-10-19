#include"main.h"

/**
 * rotateImage - rotating an image using RGB color 
 * @load : load image
 * @degree : enter degree
 * Return : No value to return
 */


void rotateImage()
{
  int degree;
  // ask user to Enter the degree
  cout << "Rotate (90), (180) or (270) degrees?";
  cin >> degree;
  unsigned char rotated_image[SIZE][SIZE][RGB];
  if (degree == 90)
  {

    // transoform the matrix => make rows columns and columns rows
    for (int i = 0; i < SIZE; i++)
    {
      for (int j = 0; j < SIZE; j++)
      {
        for (int color = 0; color < RGB; color++)
        {
          rotated_image[j][SIZE - 1 - i][color] = image[i][j][color];
        }
      }
    }

    // back to array variable image
    for (int i = 0; i < SIZE; i++)
    {
      for (int j = 0; j < SIZE; j++)
      {
        for (int color = 0; color < RGB; color++)
        {
          image[i][j][color] = rotated_image[i][j][color];
        }
      }
    }
  }

  else if (degree == 180)
  {

    for (int i = 0; i < SIZE; i++)
    {
      for (int j = 0; j < SIZE / 2; j++)
      {
        for (int color = 0; color < RGB; color++)
        {
          // reverse columns using swap function
          swap(image[i][j][color], image[i][SIZE - 1 - j][color]);
        }
      }
    }
  }

  else if (degree == 270)
  {
    // Transpose the matrix
    for (int i = 0; i < SIZE; i++)
    {
      for (int j = i + 1; j < SIZE; j++)
      {
        for (int color = 0; color < RGB; color++)
        {
          swap(image[i][j][color], image[j][i][color]);
        }
      }
    }

    // Reverse the rows
    for (int i = 0; i < SIZE / 2; i++)
    {
      for (int j = 0; j < SIZE; j++)
      {
        for (int color = 0; color > RGB; color++)
        {
          swap(image[i][j][color], image[SIZE - 1 - i][j][color]);
        }
      }
    }
  }
}

