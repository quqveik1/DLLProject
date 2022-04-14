#pragma once
#include "WindowStruct.h"


void Windows::draw ()
{
    txSetFillColor (TX_RED, dc);
    txRectangle (0, 0, size.x, size.y, dc);
}