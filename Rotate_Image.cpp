#include "main.h"
/**
 * RotateImage - The function rotate image the function ask the user to enter degree between : (90) or (180) or (360) 
 * if the user enter:
 *  90 : it will reverse the columns of the matrix 
 *  180 : it will reverse rows and columns of matrix
 *  270 : transpose the matrix then reverse rows
 * 
 * 
 * Return : no return value
 **/

// 6 - rotate image
void rotateImage() {

  int degree;
  // ask user to Enter rotate degree
  cout << "Rotate (90), (180) or (270) degrees?";
  cin >> degree;
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
    // Reverse columns
    for (int i = 0;i < SIZE; i++) {
      for (int j = 0; j < SIZE / 2; j++) {
        swap(image[i][j], image[i][SIZE - 1 - j]);
      }
    }

  }


  else if (degree == 270) {
        // Transpose the matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            swap(image[i][j], image[j][i]);
        }
    }

    // Reverse the rows
    for (int i = 0; i < SIZE / 2; i++) {
        for (int j = 0; j < SIZE; j++) {
            swap(image[i][j], image[SIZE - 1 - i][j]);
        }
    }
  }

}

