#ifndef MAIN_H
#define MAIN_H

#include<iostream>
#include "bmplib.h"
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;

extern unsigned char image[256][256];

void Invert(void);
void blurImage(void);
void enlarge_Image(void);
int flip_image(void);
void InvertBW(void);
void mergeFilter(void);
void shrinkImage(void);
void rotateImage(void);
void DetectImageEdges();
void skewImageRight();
void skewImageUp();
int darkenLighten();

/* The declareing of all function*/

#endif
