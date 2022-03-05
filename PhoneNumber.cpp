#include <iomanip>
using std::setw;

#include "PhoneNumber.h"

ostream &operator<<(ostream &output, const PhoneNumber &number){
    output <<"("<<number.areaCode<<")"<<number.exchange<<"-"<<number.line;
    return output;//habilita concatenar cout<<a<<b<<c;
}

istream &operator>>(istream &input, PhoneNumber &number){
    input.ignore();//pula (
    input>>setw(3)>>number.areaCode;//le o codigo de area
    input.ignore(2);//pula ) e espaço
    input>>setw(3)>>number.exchange;//le os proximos 3 digitos
    input.ignore();//pula
    input>>setw(4)>>number.line;//le os proximos 4 digitos
    return input;//habilita cin>>a>>b>>c;
}
