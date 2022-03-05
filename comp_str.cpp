#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str0, str1;
	getline(cin, str0);
	getline(cin, str1);
	
	if(str0 == str1){
		cout << "Palavras iguais." << endl;
	}else{
		cout << "Palavras diferentes." << endl;
	}
	
	return 1;
}
