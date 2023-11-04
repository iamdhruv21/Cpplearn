#include<cmath>
using namespace std;

void octal_to_decimal(){

    string oct;
    cout << "Enter a Octal Number: ";
    cin >> oct;

    int decimal = 0;
    int base = 8;

    for(int i = ( oct.length() - 1), n = 0; i >= 0; i--, n++){
        int last = oct.at(i);
        decimal = decimal + ( check2(last) * pow(base, n) );
    }

    cout << "Decimal is " << decimal << endl;
}
