#ifndef MAIN_H
#define MAIN_H

#include<iostream>
#include "bmplib.h"
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;

extern unsigned char image[256][256][RGB];


void blackWhiteFilter();
void blurImage();
void cropImage();
int darkenLighten();
void enlargeImage();
int flip_image();
void Invert();
void mergeFilter();
void mirrorImage();
void rotateImage();
void skewImageRight();
void skewImageUp();
void shrinkImage();
void shuffleImage();
void DetectImageEdges();

#endif
