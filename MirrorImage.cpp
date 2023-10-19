#include"main.h"

/**
 * mirrorImage - mirroring an image to left or right or up or down
 *@load : load image
 *
 * Return : Always no value to return 
 */


void mirrorImage() {

  char side;
  bool flag = false;
  cout << "Mirror (l)eft, (r)ight, (u)pper, (d)own side?";

  while(!flag)
  {
	  cin >> side;
    switch(side)
    {
	    case 'l':
		    for (int i = 0; i  < SIZE;i++) {
			    for (int j = 0; j < SIZE / 2; j++) {
				    image[i][SIZE - j - 1] = image[i][j];
			    }
		    }
		    flag = true;
		    break ;

	    case'r':
		    for (int i = 0; i  < SIZE;i++) {
			    for (int j = 0; j < SIZE / 2; j++) {
				    image[i][j] = image[i][SIZE - j - 1];
			    }
		    }
		    flag = true;
		    break;
	    case'u':
		    for (int i = 0; i  < SIZE;i++) {
			    for (int j = 0; j < SIZE; j++) {
				    image[SIZE - i - 1][j] = image[i][j];
			    }
		    }
		    flag = true;
		    break;
	    case'b':
		    for (int i = 0; i  < SIZE / 2;i++) {
			    for (int j = 0; j < SIZE; j++) {
				    image[i][j] = image[SIZE - i - 1][j];
			    }
		    }
		    flag = true;
		    break ;

	    default :
		    cout << "Invalid side " <<endl;
      }
   }
}
