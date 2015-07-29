//
//  complex.cpp
//  Complex
//
//  Created by luke wang on 27/7/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#include "complex.h"
//operator后面有没有空格无所谓
inline complex& complex::operator += (const complex& r)
{
    return __doapl (this, r);//把收到的两个参数原封不动地传给__doapl
}
//左边和右边的输入参数都不会被改变，因此都设为const
//返回的时local object，所以return by value
double real(const complex& c)
{
    return c.real();
}
double imag(const complex& c)
{
    return c.imag();
}
inline complex operator + (const complex& x, const complex& y)
{
    return complex (real (x) + real (y),
                    imag (x) + imag (y));//创建一个临时对象，里头可以给初值也可以不给
}