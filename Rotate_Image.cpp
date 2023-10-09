#include<iostream>
#include "main.h"
using namespace std;
/**
 * RotateImage - The function rotate image the function ask the user to enter degree between : (90) or (180) or (360) 
 * if the user enter:
 *  90 : it will reverse the columns of the matrix 
 *  180 : it will reverse rows and columns of matrix
 *  360 : it not do nothing
 * 
 * 
 * Return : no return value
 * 
*/

// 6 - rotate image
void rotateImage(void) {

  int degree;
  // ask user to Enter the degree
  cout << "Rotate (90), (180) or (360) degrees?";
  cin>> degree;
  unsigned char rotated_image[SIZE][SIZE];
  if (degree == 90) {
  
    
    // transoform the matrix => make rows columns and columns rows
    for (int i = 0;i < SIZE; i++) {
      for (int j = 0;j <SIZE; j++) {
        rotated_image[j][SIZE - 1 - i] = image[i][j];
      }
    }

    // back to array variable image
    for (int i = 0;i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        image[i][j] = rotated_image[i][j];
      }
    }

  }

  else if (degree == 180) {

    // Reverse Rows
    for (int i = 0;i < SIZE / 2; i++) {
      for (int j = 0; j < SIZE; j++) {
        swap(image[i][j], image[SIZE - 1 - j][j]);
      }
    }

    // Reverse columns
    for (int i = 0;i < SIZE; i++) {
      for (int j = 0; j < SIZE / 2; j++) {
        swap(image[i][j], image[i][SIZE - 1 - j]);
      }
    }


    // back to array variable image
    for (int i = 0;i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        image[i][j] = rotated_image[i][j];
      }
    }

  }


}
