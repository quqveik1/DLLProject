#pragma once
#include "WindowStruct.cpp"


struct CircleStruct : Windows
{
    CircleStruct (Vector _size) :
        Windows (_size)
    {
    }
    virtual void draw ();
};