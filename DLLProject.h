﻿// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DLLPROJECT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DLLPROJECT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLLPROJECT_EXPORTS
#define DLLPROJECT_API __declspec(dllexport)
#else
#define DLLPROJECT_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DLLPROJECT_API CDLLProject {
public:
	CDLLProject(void);
	// TODO: add your methods here.
};

extern DLLPROJECT_API int nDLLProject;

DLLPROJECT_API int fnDLLProject(void);
