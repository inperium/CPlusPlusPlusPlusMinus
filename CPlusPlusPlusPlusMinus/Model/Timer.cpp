//
//  Timer.cpp
//  CPlusPlusPlusPlusMinus
//
//  Created by Bowen, Isaac on 1/31/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include <iostream>
#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}
void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: endTimer()
{
    executionTime = clock() - executionTime;
}

long Timer :: getExecutionTimeInMicroseconds(){
    return executionTime;
}
