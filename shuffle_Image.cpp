#include"main.h"

void shuffleImage() {

    // image divide into four parts
    int q1, q2, q3, q4;
	while (true)
	{
    	cout << "New order of quarters shouled be 4 intger Q1 Q2 Q3 Q4?";
    	cin >> q1 >> q2 >> q3 >> q4;
		int array_input[] ={q1, q2, q3, q4};
		bool test1 = false;
		for (int test = 0;test < 4 ; test++)
		{
			for(int j = test + 1; j < 4; j++)
			{
				if(array_input[test] == array_input[j] || !(array_input[test] >= 0 && array_input[test] < 5))
				{
					cout << "invalid input please try again:: \n";
					test1 = true;
					break;
				}
				if(test1)
					break;
			}
		}
		if(!test1)
			break;
	}			
	
    
    unsigned char shuffledImage[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        shuffledImage[i][j] = 255;
      }
    }

    /* --------------   First quarter      ----------------   */

    int x,y;

    if (q1 == 1) {
      x = y = 0;
    }
    else if (q1 == 2) {
      x =  0;
      y = SIZE / 2;
    }
    else if (q1 == 3) {
      x =  SIZE / 2;
      y = 0;
    }
    else if (q1 == 4) {
      x = y = SIZE / 2;
    }





    // Call the copy function to update the original image
    int c1 = 0, c2 = 0;
    
    for (int i = x; i < 128 + x && i < SIZE; i++) {
      for (int j = y; j < 128 + y && j < SIZE; j++) {
        shuffledImage[c1][c2] = image[i][j];
        c2++;
      }
      c1++;
      c2 = 0;
    }

    /* --------------   second quarter      ----------------   */


    if (q2 == 1) {
      x = y = 0;
    }
    else if (q2 == 2) {
      x =  0;
      y = SIZE / 2;
    }
    else if (q2 == 3) {
      x =  SIZE / 2;
      y = 0;
    }
    else if (q2 == 4) {
      x = y = SIZE / 2;
    }


    // Call the copy function to update the original image
    c1 = 0;
    c2 = SIZE / 2;
    for (int i = x; i < 128 + x && i < SIZE; i++) {
      for (int j = y; j < 128 + y && j < SIZE; j++) {
        shuffledImage[c1][c2] = image[i][j];
        c2++;
      }
      c1++;
      c2 = SIZE / 2;
    }


    /* --------------   Third quarter      ----------------   */


    if (q3 == 1) {
      x = y = 0;
    }
    else if (q3 == 2) {
      x =  0;
      y = SIZE / 2;
    }
    else if (q3 == 3) {
      x =  SIZE / 2;
      y = 0;
    }
    else if (q3 == 4) {
      x = y = SIZE / 2;
    }



    // Call the copy function to update the original image
    c1 = SIZE / 2;
    c2 = 0;
    for (int i = x; i < 128 + x && i < SIZE; i++) {
      for (int j = y; j < 128 + y && j < SIZE; j++) {
        shuffledImage[c1][c2] = image[i][j];
        c2++;
      }
      c1++;
      c2 = 0;
    }


    /* --------------   Fourth quarter      ----------------   */

    if (q4 == 1) {
      x = y = 0;
    }
    else if (q4 == 2) {
      x =  0;
      y = SIZE / 2;
    }
    else if (q4 == 3) {
      x =  SIZE / 2;
      y = 0;
    }
    else if (q4 == 4) {
      x = y = SIZE / 2;
    }


    // Call the copy function to update the original image
    c1 = SIZE / 2;
    c2 = SIZE / 2;
    for (int i = x; i < 128 + x && i < SIZE; i++) {
      for (int j = y; j < 128 + y && j < SIZE; j++) {
        shuffledImage[c1][c2] = image[i][j];
        c2++;
      }
      c1++;
      c2 = SIZE / 2;
    }




    for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        image[i][j] = shuffledImage[i][j];
      }
    }
}