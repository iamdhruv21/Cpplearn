
using namespace std;

void decimal_to_hexa(){
    int decimal;
    cout << "Enter a Decimal Number: ";
    cin >> decimal;

    string reverse_hexa;
    int base = 16;

    while(decimal != 0){
        int last = decimal % base;
        reverse_hexa = reverse_hexa + check1(last);
        decimal = decimal / base;
    }

    string hexa;
    for(int i = (reverse_hexa.length()-1); i >= 0; i--){
        hexa = hexa + reverse_hexa.at(i);
    }
    cout << "HexaDecimal Number is " << hexa << endl << endl;

}
