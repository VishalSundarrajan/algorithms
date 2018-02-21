//
//  typecaster.cpp
//  advancedstack
//
//  Created by Vishal on 2/20/18.
//  Copyright © 2018 Vishal. All rights reserved.
//

#include <string>
#include <sstream>

template <typename T>
T charToDecimal(const char *str, T &number){
    std::stringstream ss;
    ss<<str;
    ss>>number;
    return number;
}

