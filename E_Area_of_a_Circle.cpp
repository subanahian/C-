#include <iostream>
#include <iomanip> // Required for setprecision
using namespace std;
int main(){
    double R, Area;
    double pi=3.141592653;
    cin>>R;
    Area=pi*R*R;
    cout<<fixed<<setprecision(9)<<Area<<"\n";
    return 0;
}
