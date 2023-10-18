Ahmed دفعة, [10/18/2023 1:49 PM]
void cropImage()
{
  int x,y,l,w;
  cout << "Enter x access position :" <<endl;
  cin >> x ;
  cout << "Enter y access position :" << endl;
  cin >> y ;
  cout << "Enter the length : " << endl;
  cin >> l ;
  cout << "Enter the width : " << endl;
  cin >> w;
  
  for (int i = 0; i < SIZE; i++){
      for (int j = 0; j < SIZE; j++){
        if (i < x  i > x + l  j < y || j > y + w)
            image[i][j] = 255; 
          }
     }
}
