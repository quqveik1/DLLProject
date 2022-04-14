// DLLProject.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "DLLProject.h"


// This is an example of an exported variable
DLLPROJECT_API int nDLLProject=0;

// This is an example of an exported function.
DLLPROJECT_API int fnDLLProject(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDLLProject::CDLLProject()
{
    return;
}
