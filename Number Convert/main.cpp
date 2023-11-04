#include<iostream>
#include"support_function.cpp"
#include"binary_to_gray.cpp"
#include"grey_to_binary.cpp"

#include"decimal_to_binary.cpp"
#include"decimal_to_octal.cpp"
#include"decimal_to_hexa.cpp"

#include"binary_to_decimal.cpp"
#include"binary_to_octal.cpp"
#include"binary_to_hexa.cpp"

#include"octal_to_binary.cpp"
#include"octa_to_decimal.cpp"
#include"octal_to_hexa.cpp"

#include"hexa_to_binary.cpp"
#include"hexa_to_decimal.cpp"
#include"hexa_to_octal.cpp"
using namespace std;

int main()
{
    int check;
    
    cout << "Enter 1 for Decimal to Binary" << endl;
    cout << "Enter 2 for Decimal to Octal" << endl;
    cout << "Enter 3 for Decimal to HexaDecimal" << endl << endl;

    cout << "Enter 4 for Octal to Decimal" << endl;
    cout << "Enter 5 for Octal to Binary" << endl;
    cout << "Enter 6 for Octal to HexaDecimal" << endl << endl;

    cout << "Enter 7 for HexaDecimal to Decimal" << endl;
    cout << "Enter 8 for HexaDecimal to Octal" << endl;
    cout << "Enter 9 for HexaDecimal to Binary" << endl << endl;

    cout << "Enter 10 for Binary to Decimal" << endl;
    cout << "Enter 11 for Binary to Octal" << endl;
    cout << "Enter 12 for Binary to HexaDecimal" << endl << endl;

    cout << "Enter 13 for Binary to Grey" << endl;
    cout << "Enter 14 for Grey to Binary" << endl;
    cin >> check;

    switch(check){
        case 1:{
            decimal_to_binary();
            break;
        }
        case 2:{
            decimal_to_octal();
            break;
        }
        case 3:{
            decimal_to_hexa();
            break;
        }
        case 4:{
            octal_to_decimal();
            break;
        }
        case 5:{
            octal_to_binary();
            break;
        }
        case 6:{
            octal_to_hexa();
            break;
        }
        case 7:{
            hexa_to_decimal();
            break;
        }
        case 8:{
            hexa_to_octal();
            break;
        }
        case 9:{
            hexa_to_binary();
            break;
        }
        case 10:{
            binary_to_decimal();
            break;
        }
        case 11:{
            binary_to_octal();
            break;
        }
        case 12:{
            binary_to_hexa();
            break;
        }

        case 13:{
            binary_to_grey();
            break;
        }
        case 14:{
            grey_to_binary();
            break;
        }


        default :{
            cout << "  Invalid  " << endl; 
        }

    }
 
 return 0;
}