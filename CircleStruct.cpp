#pragma once
#include "CircleStruct.h"

void CircleStruct::draw ()
{
    txEllipse (0, 0, size.x, size.y, dc);

}