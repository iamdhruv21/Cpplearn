char check1(int a){
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

int check2(char a){
    switch(a){
    case '0':{
        return 0;
        break;
    }
    case '1':{
        return 1;
        break;
    }
    case '2':{
        return 2;
        break;
    }
    case '3':{
        return 3;
        break;
    }
    case '4':{
        return 4;
        break;
    }
    case '5':{
        return 5;
        break;
    }
    case '6':{
        return 6;
        break;
    }
    case '7':{
        return 7;
        break;
    }
    case '8':{
        return 8;
        break;
    }
    case '9':{
        return 9;
        break;
    }
    case 'A':{
        return 10;
        break;
    }
    case 'B':{
        return 11;
        break;
    }
    case 'C':{
        return 12;
        break;
    }
    case 'D':{
        return 13;
        break;
    }
    case 'E':{
        return 14;
        break;
    }
    case 'F':{
        return 15;
        break;
    }
    case 'a':{
        return 10;
        break;
    }
    case 'b':{
        return 11;
        break;
    }
    case 'c':{
        return 12;
        break;
    }
    case 'd':{
        return 13;
        break;
    }
    case 'e':{
        return 14;
        break;
    }
    case 'f':{
        return 15;
        break;
    }
}
}

char check_val(char a, char b){
    if(a == '0' && b == '0'){
        return '0';
    }
    else if(a == '0' && b == '1'){
        return '1';
    }
    else if(a == '1' && b == '0'){
        return '1';
    }
    else if(a == '1' && b == '1'){
        return '0';
    }
}