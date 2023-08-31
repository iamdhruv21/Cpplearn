#include<iostream>
using namespace std;

char check(int a){
    switch(a){
    case 0:{
        return '0';
        break;
    }
    case 1:{
        return '1';
        break;
    }
    case 2:{
        return '2';
        break;
    }
    case 3:{
        return '3';
        break;
    }
    case 4:{
        return '4';
        break;
    }
    case 5:{
        return '5';
        break;
    }
    case 6:{
        return '6';
        break;
    }
    case 7:{
        return '7';
        break;
    }
    case 8:{
        return '8';
        break;
    }
    case 9:{
        return '9';
        break;
    }
     case 10:{
        return 'A';
        break;
    }
    case 11:{
        return 'B';
        break;
    }
    case 12:{
        return 'C';
        break;
    }
    case 13:{
        return 'D';
        break;
    }
    case 14:{
        return 'E';
        break;
    }
    case 15:{
        return 'F';
        break;
    }


}
}

int main(){
    int decimal;
    cout << "Enter a Decimal Number: ";
    cin >> decimal;

    string reverse_hexa;
    int base = 16;

    while(decimal != 0){
        int last = decimal % base;
        reverse_hexa = reverse_hexa + check(last);
        decimal = decimal/ base;
    }

    string hexa;
    for(int i = (reverse_hexa.length()-1); i >= 0; i--){
        hexa = hexa + reverse_hexa.at(i);
    }
    cout << "HexaDecimal Number is " << hexa << endl << endl;

 return 0;
}

