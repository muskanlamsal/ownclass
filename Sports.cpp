#include<iostream>
#include "Sports.h"
using namespace std;

void Sports::setBrand(string Brand){
    brand = Brand;

}
string Sports::getBrand(){
     return brand;
}
void Sports::setKit(string Kit){
    kit = Kit;

}
string Sports::getKit(){
     return kit;
}
void Sports::displayMessage(){
    cout<<getBrand()<<"\n";
    cout<<getKit();
}


