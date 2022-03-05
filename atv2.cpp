#include <iostream>
#include <string>

template <typename T>
class Pair{
	public:
		Pair(const T& t, const T& u) : first(t), second(u){};

		T& get_first(){return first;}
		T& get_second(){return second;}

		const T& get_first() const {return first;}
		const T& get_second() const {return second;}

	private:
		T first;
		T second;
};

template <typename T>
void print_pair(const T& p){
	std::cout << "(" << p.get_first() << ", " << p.get_second() << ")" << std::endl;
}

template <typename T>
T add_pairs(const T& p1, const T& p2){
    T x;
    x = p1 + p2;
    return x;
}

int main(){

    std::string s1 = "Hello", s2 = "World";
    Pair p(1, 2);

	print_pair(p);

    std::cout << "Soma int: " << add_pairs(49, 24) << std::endl;
    std::cout << "Soma double: " << add_pairs(1.4, 0.2) << std::endl;
    std::cout << "Concatena string: " << add_pairs(s1, s2) << std::endl;
}