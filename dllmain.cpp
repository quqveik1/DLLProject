// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdio.h"
#include "TXLib.h"
#include "dllmain.h"



BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

AppStructure *APPSTRUCT = NULL;

DLLStructure *createStruct (AppStructure *obj)
{
    APPSTRUCT = obj;
    return new DLLStructure();
}

int DLLStructure::sumNumbers (int addNum)
{
    return num_ + APPSTRUCT->multiplicatNum (addNum);
}


Windows *createWindow (Vector _size)
{
    return new Windows (_size);
}

CircleStruct *createCircleStruct (Vector _size)
{
    return new CircleStruct (_size);
}


