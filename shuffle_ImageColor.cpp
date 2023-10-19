#include"main.h"

/**
 * shuffleImage - shuffleing images quarters
 * @load : load image
 * @q1 : get the first quarter
 * @q2 : get the second quarter
 * @q3 : get the third quarter 
 * @q4 : get the fourth quarter
 *
 * Return : No value to return
 */


void shuffleImage()
{

  // image divide into four parts
  int q1, q2, q3, q4;
  cout << "New order of quarters ?";
  cin >> q1 >> q2 >> q3 >> q4;

  unsigned char shuffledImage[SIZE][SIZE][RGB];

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        shuffledImage[i][j][color] = 255;
      }
    }
  }

  /* --------------   First quarter      ----------------   */

  int x, y;

  if (q1 == 1)
  {
    x = y = 0;
  }
  else if (q1 == 2)
  {
    x = 0;
    y = SIZE / 2;
  }
  else if (q1 == 3)
  {
    x = SIZE / 2;
    y = 0;
  }
  else if (q1 == 4)
  {
    x = y = SIZE / 2;
  }

  // Call the copy function to update the original image
  int c1 = 0, c2 = 0;

  for (int i = x; i < 128 + x && i < SIZE; i++)
  {
    for (int j = y; j < 128 + y && j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        shuffledImage[c1][c2][color] = image[i][j][color];
      }
      c2++;
    }
    c1++;
    c2 = 0;
  }

  /* --------------   second quarter      ----------------   */

  if (q2 == 1)
  {
    x = y = 0;
  }
  else if (q2 == 2)
  {
    x = 0;
    y = SIZE / 2;
  }
  else if (q2 == 3)
  {
    x = SIZE / 2;
    y = 0;
  }
  else if (q2 == 4)
  {
    x = y = SIZE / 2;
  }

  // Call the copy function to update the original image
  c1 = 0;
  c2 = SIZE / 2;
  for (int i = x; i < 128 + x && i < SIZE; i++)
  {
    for (int j = y; j < 128 + y && j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        shuffledImage[c1][c2][color] = image[i][j][color];
      }
      c2++;
    }
    c1++;
    c2 = SIZE / 2;
  }

  /* --------------   Third quarter      ----------------   */

  if (q3 == 1)
  {
    x = y = 0;
  }
  else if (q3 == 2)
  {
    x = 0;
    y = SIZE / 2;
  }
  else if (q3 == 3)
  {
    x = SIZE / 2;
    y = 0;
  }
  else if (q3 == 4)
  {
    x = y = SIZE / 2;
  }

  // Call the copy function to update the original image
  c1 = SIZE / 2;
  c2 = 0;
  for (int i = x; i < 128 + x && i < SIZE; i++)
  {
    for (int j = y; j < 128 + y && j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        shuffledImage[c1][c2][color] = image[i][j][color];
      }
      c2++;
    }
    c1++;
    c2 = 0;
  }

  /* --------------   Fourth quarter      ----------------   */

  if (q4 == 1)
  {
    x = y = 0;
  }
  else if (q4 == 2)
  {
    x = 0;
    y = SIZE / 2;
  }
  else if (q4 == 3)
  {
    x = SIZE / 2;
    y = 0;
  }
  else if (q4 == 4)
  {
    x = y = SIZE / 2;
  }

  // Call the copy function to update the original image
  c1 = SIZE / 2;
  c2 = SIZE / 2;
  for (int i = x; i < 128 + x && i < SIZE; i++)
  {
    for (int j = y; j < 128 + y && j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        shuffledImage[c1][c2][color] = image[i][j][color];
      }
      c2++;
    }
    c1++;
    c2 = SIZE / 2;
  }

  // copy back to original image array

  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      for (int color = 0; color < RGB; color++)
      {
        image[i][j][color] = shuffledImage[i][j][color];
      }
    }
  }
}

