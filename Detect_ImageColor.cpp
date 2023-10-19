#include<iostream>
#include "main.h"


/*
 * DetectImageEdges: the function convert the RGB  TO gry then check if it black make  make it white 
 * 
 * @load : load image 
 * 
 * Return : Always return no value  
 * 
 */


void DetectImageEdges()
{
  bool flag = false;

  for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        // Convert RGB to gray
        int gray = (image[i][j][0] + image[i][j][1] + image[i][j][2]) / 3;
       
        if (gray >= 127) { // black
            image[i][j][0] = 255;
            image[i][j][1] = 255;
            image[i][j][2] = 255;

            if (flag)
      {
                flag = false;
                if (j > 0)// to a void  this the Negative index of j 
        { 
          image[i][j - 1][0] = 0;
          image[i][j - 1][1] = 0;
          image[i][j - 1][2] = 0;
                }
            }
        } else if (gray <= 127)// black
    { 
            if (flag)
      {
                image[i][j][0] = 255;
                image[i][j][1] = 255;
                image[i][j][2] = 255;
                continue;
            }
            image[i][j][0]= 0;
            image[i][j][1]= 0;
            image[i][j][2]= 0;
            flag = true;
        }
        }
      }
}
