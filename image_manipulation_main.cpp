#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include "bmplib.cpp"
#include "main.h"
using namespace std;


void loadImage ();
void saveImage ();
void doSomethingForImage ();

int main()
{
char ordar;
  //welcome menu 
  cout << "welcome to image editor \n";
  
  cout << "Please enter file name of the image to process: \n";
  loadImage();
  cout <<"1-	Black & White Filter\n 2-	Invert Filter\n 3- Merge Filter\n";
  cout << "4-	Flip Image\n 5-	Darken and Lighten Image\n 6-	Rotate Image\n";
  cout << "7-	Detect Image Edges 8-	Enlarge Image 9-	Shrink Image\n";
  cout << "a-	Mirror 1/2 Image\n b-	Shuffle Image\n c-	Blur Image\n d-	Crop Image\n";
  cout <<  "e-	Skew Image Right\n f-	Skew Image Up \n Save the image to a file ";
  cout <<"0-	Exit\n z- do anther change in same file\n r- reloadfile (new file) ";
  cin >> ordar;
  switch ((int) ordar)
  {
  case '1' /*Black & White Filter*/:
    /* code */
    break;

    case '2' /*Invert Filter*/:
    /* code */
    break;

    case '3' /*Merge Filter */:
    /* code */
    break;

    case '4' /*Flip Image*/:
    /* code */
    break;

    case '5' /*Darken and Lighten Image */:
    /* code */
    break;

    case '6' /*Rotate Image*/:
    /* code */
    break;

    case '7' /*Detect Image Edges */:
    /* code */
    break;

    case '8' /*Enlarge Image */:
    /* code */
    break;

    case '9' /*Shrink Image*/:
    /* code */
    break;

    case 'a' /*Mirror 1/2 Image*/:
    /* code */
    break;

    case 'b' /*Shuffle Image*/:
    /* code */
    break;

    case 'c' /*Blur Image*/:
    /* code */
    break;

    case 'd' /*Crop Image*/:
    /* code */
    break;

    case 'e' /*Skew Image Right*/:
    /* code */
    break;

    case 'f' /*Skew Image Up*/:
    /* code */
    break;

    case 's' /*Save the image to a file*/:
    /* code */
    break;

    case 'r' /*reloadfile (new file)*/:
    /* code */
    break;
  
  default:
    break;
  }





  //
  //doSomethingForImage();
  //saveImage();
  return 0;
}

//_________________________________________
void loadImage () {
   char imageFileName[100];

   // Get gray scale image file name
   cout << "Enter the source image file name: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   readGSBMP(imageFileName, image);
}

//_________________________________________
void saveImage () {
   char imageFileName[100];

   // Get gray scale image target file name
   cout << "Enter the target image file name: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   writeGSBMP(imageFileName, image);
}

//_________________________________________
void doSomethingForImage() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {

/* Example code to convert to BW the image
   A better version should NOt use 127 but the
   average of the pixels

        if (image[i][j] > 127)
            image[i][j] = 255;
        else
            image[i][j] = 0;
*/
// do something with the image
    }
  }
}



