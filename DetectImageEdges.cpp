#include"main.h"


/* DetectImageEdges : it is find the edges of an image and turn image into skeleton version of the original as if it drawn with pencil without coloring 
* 
* @load:image
*
* Void : No return value 
*/


void DetectImageEdges(void)
{
	
   bool flag = false;

for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
        if (image[i][j] >= 127) { // white
            image[i][j] = 255;

            if (flag)
			{
                flag = false;
                if (j > 0)// to a void  this the Negative index of j 
				{ 
				  image[i][j - 1] = 0;
                }
            }
        } else if (image[i][j] <= 127)// black
		{ 
            if (flag)
			{
                image[i][j] = 255;
                continue;
            }
            image[i][j] = 0;
            flag = true;
        }
    }
}
}
