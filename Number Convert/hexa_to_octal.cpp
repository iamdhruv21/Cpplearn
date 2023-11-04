#include<cmath>
using namespace std;

void hexa_to_octal(){

    string hexa;
    cout << "Enter a HexaDecimal Number: ";
    cin >> hexa;

    int decimal = 0;
    int base1 = 16;

    for(int i = ( hexa.length() - 1), n = 0; i >= 0; i--, n++){
        int last = hexa.at(i);
        decimal = decimal + ( check2(last) * pow(base1, n) );
    }
    string reverse_octal;
    int base = 8;

    while(decimal != 0){
        int last = decimal % base;
        reverse_octal = reverse_octal + check1(last);
        decimal = decimal / base;
    }

    string octal;
    for(int i = (reverse_octal.length()-1); i >= 0; i--){
        octal = octal + reverse_octal.at(i);
    }
    cout << "Octal Number is " << octal << endl << endl;
}