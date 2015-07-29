//
//  complex.h
//  Complex
//
//  Created by luke wang on 27/7/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#ifndef __Complex__complex__
#define __Complex__complex__

#include <stdio.h>
class complex
{
public:
    complex(double r = 0, double i = 0) : re(r), im(i)
    {
    }
    complex& operator += (const complex&);
    double real () const {return re; }
    double imag () const {return im; }
    
    
private:
    double re, im;
    
    //do assigment plus
    friend complex& __doapl (complex*, const complex&);
};
//class本体之外
inline complex& __doapl (complex* ths, const complex& r)
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}



#endif /* defined(__Complex__complex__) */
