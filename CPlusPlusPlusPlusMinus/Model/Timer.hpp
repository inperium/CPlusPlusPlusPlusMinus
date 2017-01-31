//
//  Timer.hpp
//  CPlusPlusPlusPlusMinus
//
//  Created by Bowen, Isaac on 1/31/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer ();
    void startTimer();
    void endTimer();
    
};

#endif /* Timer_hpp */
