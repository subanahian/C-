#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    cout<<"floor "<<A<<" / "<<B<<"="<<floor((double)A/B)<<"\n";
    cout<<"ceil "<<A<<" / "<<B<<"="<<ceil((double)A/B)<<"\n";
    cout<<"round "<<A<<" / "<<B<<"="<<round((double)A/B)<<"\n";
    return 0;
}
