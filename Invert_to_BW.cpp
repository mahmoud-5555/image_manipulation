#include<bits/stdc++.h>
#include "main.h"
using namespace std;

/*
*InvertBW: invert   image to black and white
*@Load: image
*Always return 0(successfull)
*/

void InvertBW(void)
{
 for(int i = 0; i < SIZE; ){
 	for(int j = 0; j < SIZE; j++){
 		
 		
 		if(image[i][j] < 128){
 			
 			image[i][j]=0;
		 }
		else image[i][j] = 256; 
 		
	 }
 }
}
