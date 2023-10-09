#include <bits/stdc++.h>
#include "main.h"
using namespace std;



/*
* Flip_image : This fliter allows the user to flip image horizontally or vertically as if it is  reflected on a mirror
* @load :image
* Alway return 0 (successfull)
*/

   

 void flip_image()
 {
 	char flip ;
 	cin >> flip;
 	
	// flip the colomns for horizontall  
 	if(flip == 'h')
 	{
 		for(int i = 0 ; i < SIZE ; i++){
 			for(int j = 0 ; j < SIZE / 2; j++){
 				swap(image[i][j],image[i][SIZE-1-j]);

 				
			 }

		 }

	}
	//flip the rows for verticall

	else if (flip == 'v')
        {

		for(int i = 0 ; i < SIZE / 2; i++){
 			for(int j = 0 ; j < SIZE ; j++){
 				swap(image[i][j],image[SIZE-1-i][j]);

 			}

 		}

 	}

 }
