//
//  Controller.cpp
//  CPlusPlusPlusPlusMinus
//
//  Created by Bowen, Isaac on 1/23/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include <iostream>
#include "Controller.h"

using namespace std;

void Controller :: start()
{
    int suppliedNumber = 9;
    int * numberPointer = &suppliedNumber;
    
    cout << suppliedNumber <<endl;
    specialOutput(suppliedNumber);
    cout << suppliedNumber << endl;
    
    cout << "Changing a Value" << endl;
    suppliedNumber = impactNumber();
    cout << suppliedNumber << endl;
    
    cout << "Changing with a pointer." << endl;
    usePointerToChange(numberPointer);
    cout<< "see how the number has been changed: " << suppliedNumber << endl;
}

void Controller :: specialOutput(int suppliedNumber)
{
    cout << " was given: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 3 + 3242) / 42;
    cout << "It is now: " << suppliedNumber << endl;
}

int Controller :: impactNumber()
{
    return 89234528;
}

void Controller:: usePointerToChange(int * pointer)
{
    *pointer = 2 * (1111);
}
