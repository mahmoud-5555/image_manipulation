#include<iostream>
#include "main.h"
using namespace std;

/**
 * CropImage - croping an image depending on the ranges
 * @load : load image
 * @x : x access
 * @y : y access
 * @l : the length
 * @w : the width
 * Return : No value to return 
 */


void cropImage()
{
  int x,y,l,w;
  cout << "Enter x access position :" <<endl;
  cin >> x ;
  cout << "Enter y access position :" << endl;
  cin >> y ;
  cout << "Enter the length : " << endl;
  cin >> l ;
  cout << "Enter the width : " << endl;
  cin >> w;
  
  for (int i = 0; i < SIZE; i++){
      for (int j = 0; j < SIZE; j++){
        // any pixel of the range of new size starting from x access and y access
        if (i < x  i > x + l  j < y || j > y + w)
            for (int color = 0; color = RGB; color++) {
                image[i][j][color] = 255; 
            }
          }
     }
}