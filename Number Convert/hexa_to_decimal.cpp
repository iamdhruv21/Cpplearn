
#include<cmath>
using namespace std;

void hexa_to_decimal(){

    string hexa;
    cout << "Enter a HexaDecimal Number: ";
    cin >> hexa;

    int decimal = 0;
    int base = 16;

    for(int i = ( hexa.length() - 1), n = 0; i >= 0; i--, n++){
        int last = hexa.at(i);
        decimal = decimal + ( check2(last) * pow(base, n) );
    }

    cout << "Decimal is " << decimal << endl;
}

