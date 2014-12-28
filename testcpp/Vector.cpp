//
//  Vector.cpp
//  testcpp
//
//  Created by Leandro on 12/27/14.
//  Copyright (c) 2014 Buzzlabs. All rights reserved.
//

#include "Vector.h"

Vector::Vector(int s)
    :sz(s), elem{new double[s]}{
}


double& Vector::operator[](int i) {
    return elem[i];
}
 


int Vector::size() const {
    return sz;
}





