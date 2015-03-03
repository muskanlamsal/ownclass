#include <iostream>
#include "Sports.h"
using namespace std;

int main()
{
    Sports sport1;
    string brandName,kitName;
    cout<<"Enter the brand name:";
    cin>>brandName;
    cout<<"Enter the kit name:";
    cin>>kitName;
    sport1.setBrand(brandName);
    sport1.setKit(kitName);
    sport1.displayMessage();
}
