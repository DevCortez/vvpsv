// dxgi.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "dxgi.h"


// This is an example of an exported variable
DXGI_API int ndxgi=0;

// This is an example of an exported function.
DXGI_API int fndxgi(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
Cdxgi::Cdxgi()
{
    return;
}
