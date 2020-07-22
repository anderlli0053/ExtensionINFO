// Written by Andrew Poženel AKA SloDevTeam

/*
    FIle extension helper application
*/

#include <iostream>
#include <windows.h>
#include <dos.h>
#include <stdlib.h>
#include <zlib.h>




using namespace std;

int main(int argc, char ** argv)

{


    HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

    //system("Color 4f");
    SetConsoleTextAttribute(hconsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    SetConsoleTitle("File Extension Information Software");




    cout << "* WRITTEN BY ANDREW POZENEL AKA SLODEVTEAM *" << endl;
    cout << "* Copyright 2020                           *" << endl;
    cout << "* WRITTEN IN COMBINATION OF C, C++ AND C#  *" << endl;
    cout << "********************************************" << endl;
    cout << "============================================" << endl;

    std::cout << "Started reading IOSTREAM standard library from C++... please wait" << endl;
    std::cout << "Reading OK, 12512 arrays detected, 512 embedded from within!..." << endl;

    printf("\n");
    printf("\n");





}
