using namespace std;

void decimal_to_octal(){
    int decimal;
    cout << "Enter a Decimal Number: ";
    cin >> decimal;

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
