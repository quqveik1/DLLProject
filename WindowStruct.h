#pragma once
#include "TXLib.h"
#include "..\Q_Vector.h"


struct Windows
{
    HDC dc;
    Vector size;

    Windows (Vector _size, HDC _dc = NULL) :
        size (_size),
        dc (_dc)
    {
        if (dc == NULL)
        {
            if (_size > 0)
            {
                dc = txCreateCompatibleDC (_size.x, _size.y);
            }
            else
            {
                printf ("|||size = 0|||\n");
            }

        }
    }



    virtual void draw ();

};