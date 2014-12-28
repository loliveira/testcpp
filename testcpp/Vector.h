//
//  Vector.h
//  testcpp
//
//  Created by Leandro on 12/27/14.
//  Copyright (c) 2014 Buzzlabs. All rights reserved.
//

#ifndef testcpp_Vector_h
#define testcpp_Vector_h

class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size() const;

private:
    int sz;
    double* elem;
};

#endif
