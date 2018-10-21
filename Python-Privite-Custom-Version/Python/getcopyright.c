/* Return the copyright string.  This is updated manually. */

#include "Python.h"

static const char cprt[] ="Copyright (c) 2018 fingerecho.cn fangself.com.cn . All rights reserved.";

const char *
Py_GetCopyright(void)
{
    return cprt;
}
