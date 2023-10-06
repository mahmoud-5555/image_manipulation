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
char exit_test;
  //welcome menu 
  cout << "welcome to image editor \n";
  while (true)
  {
    cout << "Please enter file name of the image to process: \n";

    cout <<"1-	Black & White Filter\n 2-	Invert Filter\n 3- Merge Filter\n";
    cout << "4-	Flip Image\n 5-	Darken and Lighten Image\n 6-	Rotate Image\n";
    cout << "7-	Detect Image Edges 8-	Enlarge Image 9-	Shrink Image\n";
    cout << "a-	Mirror 1/2 Image\n b-	Shuffle Image\n c-	Blur Image\n d-	Crop Image\n";
    cout <<  "e- Skew Image Right\n f-	Skew Image Up \n s- Save the image to a file ";
    cout <<"0- Exit\n z- do anther change in same file\n l- loadfile (new file) ";
    cin >> ordar;
    switch ((int) ordar)
    {
      case '1' /*Black & White Filter*/:
        if (load)
        {
          /* code */
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '2' /*Invert Filter*/:
        if (load)
        {
          Invert(); /* - > code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '3' /*Merge Filter */:
        if (load)
        {
          /* code */
            change = true;
            saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '4' /*Flip Image*/:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '5' /*Darken and Lighten Image */:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '6' /*Rotate Image*/:
      if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '7' /*Detect Image Edges */:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '8' /*Enlarge Image */:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case '9' /*Shrink Image*/:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case 'a' /*Mirror 1/2 Image*/:
      if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case 'b' /*Shuffle Image*/:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case 'c' /*Blur Image*/:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case 'd' /*Crop Image*/:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case 'e' /*Skew Image Right*/:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

      case 'f' /*Skew Image Up*/:
        if (load)
        {
          /* code */
          change = true;
          saved = false;
        }
        else
        {
          cout <<"please load the file first befor using the tool\n";
        }
        break;

    case 's' /*Save the image to a file*/:
    if (change)
    {
      saveImage();
      cout <<"file saved :: you can load anther file or complete edit in same file \n ";
      change = false;
      saved = true;
    }
    else
      cout << "no file change plese make change first \n ";
    break;

    case 'l' /*loadfile (new file)*/:
    loadImage();
    load = true;
    change = false;
    break;

    case '0' /*0-	Exit*/:

    if(saved)
    {
      cout << "exit done \n";
        return (0);
    }
    else{
      bool cancel = false;
      while (!cancel)
      {
        cout <<"this file has change didn't saved do you sure that you wnna exit ?\n     s: save first    y: exit     n: cancel \n"; 
        cin >> exit_test;
        switch (exit_test)
        {
        case 's' /* Save the image to a file */:
          saveImage();
          cout << "saved \n";
          return (0);
          break;

        case 'y' /* exit without saving */:
          cout <<"exit sucssifull";
            return (0);
          break;

        case 'n' /* constant-expression */:
          cancel = true;
          break;
        
        default:
        cout << exit_test << "  : is not valid input \n";
          break;
        }
      } 
    }
        break;
  
    default:
        cout << ordar << "  : is not valid input \n";
      break;
  }
}  





  //
  //doSomethingForImage();
  //
  return 0;
}

//_________________________________________
void loadImage () {
   char imageFileName[100];

   // Get gray scale image file name
   cout << "Enter the source image file name: ";
   cin >> imageFileName;
   cout << '\n';

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
   cout << '\n';

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   writeGSBMP(imageFileName, image);
}

//_________________________________________
/*
void doSomethingForImage() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {

 Example code to convert to BW the image
   A better version should NOt use 127 but the
   average of the pixels

        if (image[i][j] > 127)
            image[i][j] = 255;
        else
            image[i][j] = 0;

 do something with the image
    }
  }
}
*/



