#include<iostream>
#include "main.h"
using namespace std;



/**
 *
 * darkenlighten: This filter allows the user to make the image darker (divide every pixel value by 2 to make darker) or lighter by 50% (add to the pixel 50 pixels) to make lighter 
 * 
 *
 * Return : 0 if the image changed else return 1 if the image do not change
 *
*/

int darkenLighten()

{
  bool darkenLight = false;

  while (!darkenLight)
  {
    cout << "Do you want to (d)arken or (l)ighten? \n";
    char choose;
    cin >> choose;

    switch (choose)
    {
    case 'd': // change if brightness to darker brightness

      for (int i = 0; i < SIZE; i++)
      {
        for (int j = 0; j < SIZE; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            image[i][j][color] = image[i][j][color] / 2;
          }
        }
      }

      return (0);
      break;

    case 'l': // change if brightness to lighter brightness

      for (int i = 0; i < SIZE; i++)
      {
        for (int j = 0; j < SIZE; j++)
        {
          for (int color = 0; color < RGB; color++)
          {
            // icrease brightness by 50 weather with check if the brightness get bigger than 255 then sit it value to 255
            if (image[i][j][color] + 50 > 255)
              image[i][j][color] = 255;
            else
              image[i][j][color] = image[i][j][color] + 50;
          }
        }
      }

      return (0);
      break;

    // if user Enter any expect (d) or (l) it will return message with choose to user if he want cancel the process or not
    default:
      char ordar_darken_light_image_cancel;

      cout << "invalid input please try again by press any key or use 'c' to cancle \n";
      cin >> ordar_darken_light_image_cancel;
      if (ordar_darken_light_image_cancel == 'c')
      {
        cout << "canceled";
        return (1);
      }

      break;
    }
  }
}