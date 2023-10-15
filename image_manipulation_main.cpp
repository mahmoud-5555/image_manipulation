#include "main.h"

unsigned char image[256][256];
bool load = false;
bool change = false;
bool saved = false;

void loadImage ();
void saveImage ();
//void doSomethingForImage ();

/**
 * main - entre point - include exit points  and the program user_enterface
 * read the read me to have petter understand of how the function work
 * no argumants
 * Return : 0 always 
 * 
 * 
*/


int main()
{
    cout << "*****************************\n"; 
    cout << "welcome to image editor \n";
    cout << "*****************************\n";
    cout <<"please check the read me file to undrstand how you deal with the program\n";

  while (true)
  {
    char ordar;
    char exit_test;
    //welcome menu

    cout << "Please enter file name of the image to process: \n";

    cout << "1- Black & White Filter\n2- Invert Filter\n3- Merge Filter\n";
    cout << "4- Flip Image\n5- Darken and Lighten Image\n6- Rotate Image\n";
    cout << "7- Detect Image Edges\n8- Enlarge Image\n9- Shrink Image\n";
    cout << "a- Mirror 1/2 Image\nb- Shuffle Image\nc- Blur Image\nd- Crop Image\n";
    cout << "e- Skew Image Right\nf- Skew Image Up\ns- Save the image to a file ";
    cout << "0- Exit\nz- do anther change in same file\nl- loadfile (new file)\n ";
    

    cin >> ordar;


    switch ((int) ordar)
    {
      case '1' /*Black & White Filter*/:
        if (load)
        {
          void InvertBW(void);
          change = true;
          saved = false;
        }
        else
        {
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
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
          cout <<"**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout <<"**************************************************\n";
        }
        break;

      case '3' /*Merge Filter */:
        if (load)
        {
            mergeFilter();
            change = true;
            saved = false;
        }
        else
        {
          cout <<"**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout <<"**************************************************\n";
        }
        break;

      case '4' /*Flip Image*/:
        if (load)
        {
          int test_flip_image = flip_image();
          if(!test_flip_image)
          {
            change = true;
            saved = false;
          }
        }
        else
        {
          cout <<"**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout <<"**************************************************\n";
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
          cout <<"**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
        }
        break;

      case '6' /*Rotate Image*/:
      if (load)
        {
          rotateImage();
          change = true;
          saved = false;
        }
        else
        {
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
        }
        break;

      case '7' /*Detect Image Edges */:
        if (load)
        {
          void DetectImageEdges();
          change = true;
          saved = false;
        }
        else
        {
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
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
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
        }
        break;

      case '9' /*Shrink Image*/:
        if (load)
        {
          shrinkImage();
          change = true;
          saved = false;
        }
        else
        {
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
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
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
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
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
        }
        break;

      case 'c' /*Blur Image*/:
        if (load)
        {
          void blurImage(void);
          change = true;
          saved = false;
        }
        else
        {
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
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
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
        }
        break;

      case 'e' /*Skew Image Right*/:
        if (load)
        {
          /* code */
          skewImageRight();
          change = true;
          saved = false;
        }
        else
        {
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
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
          cout << "**************************************************\n";
          cout <<"please load the file first befor using the tool\n";
          cout << "**************************************************\n";
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
        cout <<"this file has change didn't saved do you sure that you wnna exit ?\n     s: save first    y: exit     c: cancel \n"; 
        cin >> exit_test;
        switch (exit_test)
        {
        case 's' /* Save the image to a file */:
          if(change)
          {
            saveImage();
            cout << "saved \n";
            return (0);
          }
          else
            cout << "no change to save\n";
            break;

        case 'y' /* exit without saving */:
          cout <<"exit sucssifull";
            return (0);
          break;

        case 'c' /* constant-expression */:
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

/**
 * loadImage - function that import image file 
 * no argument 
 * Return: no return 
 * thair is modfied of demo_function to handel the situation of Error load_file 
 * 
 * 
*/
void loadImage () {

   char imageFileName[100];
   int test_load = 1;
   bool cancle_load = false;

   while(test_load && !cancle_load)
   {
    // Get gray scale image file name
    cout << "Enter the source image file name: ";
    cin >> imageFileName;
    cout << '\n';

    // Add to it .bmp extension and load image
    strcat (imageFileName, ".bmp");
    test_load = readGSBMP(imageFileName, image);
    if(test_load && load)
    {
      int test_load_ordar;
    
      cout <<"press 'c': to cancle load  or press '0': to exit  or (((press any key to try again)))\n";
      cin >> test_load_ordar;
      switch (test_load_ordar)
      {
      case 'c':
        cancle_load = true;
        break;
      case '0':
        exit(0);
        break;
    
      default:
        break;
      }
    }

  }
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



