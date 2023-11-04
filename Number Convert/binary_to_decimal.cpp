// #include"support_function.cpp"
#include<cmath>
using namespace std;

void binary_to_decimal(){

    string bi;
    cout << "Enter a Binary Number: ";
    cin >> bi;

    int decimal = 0;
    int base = 2;

    for(int i = ( bi.length() - 1),n = 0; i >= 0; i--,n++){
        int last = bi.at(i);
        decimal = decimal + ( check2(last)* pow(base, n) );
    }

    cout << "Decimal is " << decimal << endl;

}