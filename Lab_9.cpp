#include <iostream>
#include <fstream>
#include "BMP.hpp"

using namespace std;
using namespace fact;

int main()
{
    BMP bmp_pic;

    bmp_pic.READ();

    bmp_pic.FILTER();

    bmp_pic.WRITE();

    cout << endl << "Task is done, check yout folder!" << endl;

    
    return 0;
}


