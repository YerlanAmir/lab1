#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    float w,h,bmi;
    cin>>w>>h;
    bmi=w/pow(h,2);
    cout<<"Your BMI is "<<fixed<<setprecision(2)<<bmi; 
}