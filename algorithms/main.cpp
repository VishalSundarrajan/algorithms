//
//  main.cpp
//  advancedstack
//
//  Created by Vishal on 2/18/18.
//  Copyright © 2018 Vishal. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "typecaster.cpp"



int main(int argc, const char * argv[]) {
    char ch[]="567.67823435454";
    double i=charToDecimal(ch,i); // convert character(s) to number using stringstream
    std::cout<<i<<"\n";
    char buffer [64];
    sprintf (buffer, "%lf", i);
    std::cout<<buffer<<"\n";
    return 0;
}
