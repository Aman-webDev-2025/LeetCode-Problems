#include<iostream>
#include<cmath>
using namespace std;
double angleClock(int hour, int minutes) {
    double min_angle = minutes*6.0;
    double hr_angle = (hour%12)*30.0+minutes*0.5;
    double diff = hr_angle - min_angle;
    if(diff < 0){
        diff = -diff; 
    }
    if(diff > 180.0){
        return 360.0 - diff;
    }
    else{
        return diff;
    }
}

int main(){
    cout<<angleClock(3, 30) << endl;
    return 0;
}