#include <iostream> 
#include <random>

using std::cout;
using std::endl;

int main(){
    srand(time(NULL));

    char caracteres[85] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q',
    'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '!', '@', '#', '$', '%', '&', '*', '-', '+', '/',
    '_', '=', '(', ')', '[', ']', '.', ';', '?', ':', '<', '>', ','};    
    
    int c, i, x;
    c = 0;
    while(c < 16){
        //cout << c + 1 << "-";
            for(i = 0; i < 9; i++){
                x = rand() % 75;
                cout << caracteres[x];
        }
        cout << endl << endl;
        c++;
    }

    return 1;
}