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
    cout << "HELLOOOO HENDRICHSEN" << endl;
    this->specialOutput();
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "What is your name?" << endl;
    string name;
    cin >> name;
    cout << "You should change your name " << name << "." << endl;
    cin.ignore();
    cin >> name;
    cout << name;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << name << age << endl;
    cout << "" << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
}

void Controller :: specialOutput()
{
    cout << "What is your age?" << endl;
}
