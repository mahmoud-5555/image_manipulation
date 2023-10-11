#include "main.h"

/*
* Flip_image : This fliter allows the user to flip image horizontally or vertically as if it is  reflected on a mirror
* @load :image
* Alway return 0 (successfull)
*/

 int flip_image(void)
 {
	bool filp_image_cancel = false;

	while (!filp_image_cancel)
	{
		cout << "press 'h' to flip horizontall or press 'v' to flip verticall \n";
 		char flip ;
 		cin >> flip;
  
 	switch (flip)
	{
	case 'h':// flip the colomns for horizontall

		for(int i = 0 ; i < SIZE ; i++){
 			for(int j = 0 ; j < SIZE / 2; j++){
 				swap(image[i][j],image[i][SIZE-1-j]);	
			 }
		 }

		return (0);
		break;

		case 'v'://flip the rows for verticall

			for(int i = 0 ; i < SIZE / 2; i++){
 				for(int j = 0 ; j < SIZE ; j++){
 					swap(image[i][j],image[SIZE-1-i][j]);
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
