#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int a = 3;
    int b = 7;
    int c = 5;

    float p, S;

    p = (a+b+c)/2.0;
    
    S = sqrt(p*(p-a)* (p-b)*(p-c));

    cout<<"La p es; "<<p<<endl;
    cout<<"La S es; "<<S<<endl;

    return 0;

}