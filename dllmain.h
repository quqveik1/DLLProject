#pragma once
#include "DLLStructure.h"
#include "AppStructure.h"
#include "WindowStruct.cpp"
#include "CircleStruct.cpp"


extern "C" __declspec (dllexport) DLLStructure *createStruct (AppStructure *obj);

extern "C" __declspec (dllexport) Windows *createWindow (Vector _size);
extern "C" __declspec (dllexport) CircleStruct *createCircleStruct (Vector _size);