#include "main.h"

/*
*InvertBW: invert   image to black and white
*@Load: image
*Always return 0(successfull)
*/

void InvertBW(void)
{
 for(int i = 0; i < SIZE;i++){
 	for(int j = 0; j < SIZE; j++){
 		
 		if(image[i][j] < 127){
 			
 			image[i][j] = 0;
		 }
		else 
			image[i][j] = 255; 
 		
	 }
 }
}
