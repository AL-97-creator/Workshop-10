#ifndef USBC_H
#define USBC_H
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

class USBConnection{
    static int sumID;
    private:
        USBConnection(int ID);
        int ID;
    public:
        CreateUsbConnection(){
            if(sumID<3)
            USBConnection(sumID+1) a;
            sumID+1;
        }
}


#endif