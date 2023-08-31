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

}

int main(){
    int decimal;
    cout << "Enter a Decimal Number: ";
    cin >> decimal;

    string reverse_octal;


    while(decimal != 0){
        int last = decimal % 8;
        reverse_octal = reverse_octal + check(last);
        decimal = decimal/ 8;
    }

    string octal;
    for(int i = (reverse_octal.length()-1); i >= 0; i--){
        binary = binary + reverse_octal.at(i);
    }
    cout << "Binary Number is " << octal << endl << endl;



 return 0;
}

