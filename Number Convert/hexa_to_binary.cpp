#include<cmath>
using namespace std;

void hexa_to_binary(){

    string hexa;
    cout << "Enter a HexaDecimal Number: ";
    cin >> hexa;

    int decimal = 0;
    int base1 = 16;

    for(int i = ( hexa.length() - 1), n = 0; i >= 0; i--, n++){
        int last = hexa.at(i);
        decimal = decimal + ( check2(last) * pow(base1, n) );
    }
    string reverse_binary;
    int base = 2;

    while(decimal != 0){
        int last = decimal % base;
        reverse_binary = reverse_binary + check1(last);
        decimal = decimal / base;
    }

    string binary;
    for(int i = (reverse_binary.length()-1); i >= 0; i--){
        binary = binary + reverse_binary.at(i);
    }
    cout << "Binary Number is " << binary << endl << endl;
}    