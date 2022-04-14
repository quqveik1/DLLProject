// ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "TXLib.h"
#include "..\DLLStructure.h"
#include "..\AppStructure.h"
#include "..\WindowStruct.cpp"
#include "..\CircleStruct.h"

int main()
{
    printf ("StartOfPrgram\n");

    HMODULE library = LoadLibrary("..\\Debug\\DLLProject.dll");
    assert (library);

    AppStructure appStructure;

    txCreateWindow (500, 500);

    /*
    DLLStructure* (*createStruct) (AppStructure *obj) = (DLLStructure*(*) (AppStructure *obj)) GetProcAddress(library, "createStruct");
    assert (createStruct);

    DLLStructure *structure =  createStruct(&appStructure);
    structure->num_ = 22;
    
    printf ("num_: %d", structure->sumNumbers (57));
    */

    
   Windows* (*createWindow) (Vector size) = (Windows*(*) (Vector size)) GetProcAddress(library, "createWindow");
   assert (createWindow);  

   CircleStruct* (*createCircleStruct) (Vector size) = (CircleStruct*(*) (Vector size)) GetProcAddress(library, "createCircleStruct");
   assert (createCircleStruct);

   Windows* manager[10] = {};

   manager [0] = createWindow ({200, 200});
   manager [1] = createCircleStruct ({200, 200});

   //txBegin ();

   manager[0]->draw ();
   manager[1]->draw ();


   txBitBlt (0, 0, manager[0]->dc);
   txBitBlt (0, 0, manager[1]->dc);

   //txEnd ();

   _getch();
}

int AppStructure::multiplicatNum (int addNum)
{
    return num_ * addNum;
}
