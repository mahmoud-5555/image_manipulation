#include <iostream>
#include "main.h"
using namespace std;

void enlarge_Image(void)
{
    unsigned char res[256][256];
    bool pass = false;
    int enlarge_Image_ordar;
    cout << "Which quarter to enlarge 1, 2, 3 or 4? \n";
    
    while(!pass)
    {
        cin >> enlarge_Image_ordar;
        switch (enlarge_Image_ordar)
        {
        case 1:
          for (int i = 0; i < 256; i++)
          {
              for(int j = 0; j < 256;j++)
              { 
                res[i][j] = image[(i / 2)][(j / 2)];
              }
              pass = true;
          }
            break;
    
        case 2:
          for (int i = 0; i < 256; i++)
          {
            for(int j = 0; j < 256;j++)
            { 
              res[i][j] = image[(int)(i / 2) + 63][(int)(j / 2)];
            }
          }  
          pass = true;
          break;

        case 3:
            for (int i = 0; i < 256; i++)
            {
              for(int j = 0; j < 256;j++)
              { 
                res[i][j] = image[(int)(i / 2)][(int)(j / 2) + 63];
              }
            } 
          pass = true;
            break;

        case 4:
            for (int i = 0; i < 256; i++)
            {
              for(int j = 0; j < 256;j++)
              { 
                res[i][j] = image[(int)(i / 2) + 63][(int)(j / 2) + 63];
              }
            }
            pass = true;
          break;
        default:
        cout << "invalid input\n";
        cout <<"try again\n";
            break;
        }

    }
    for (int i = 0; i < 256; i++)
      {
        for(int j = 0; j < 256; j++)
        { 
          image[i][j] = res[i][j];
        }
      }  
}
            

    

