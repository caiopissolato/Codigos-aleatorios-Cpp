#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maximum(const T& s1, const T& s2){
	T x;
	if(s2 < s1){
		x = s1;
		return x;

	} else if(s1 < s2){
		x = s2;
		return x;

	} else{
		return 0;
	}
}

template <typename S> 
S recebe(const S &s){ 
    return s;
}

int main(){
	string s1, s2;

	s1 = "Hello";
	s2 = "World!!!";
    
	cout << "Inteiro: " << recebe(maximum(16, 7)) << endl;
	cout << "Double: " << recebe(maximum(9.7, 21.5)) << endl;
	cout << "String: " << recebe(maximum(s1, s2)) << endl;
}
