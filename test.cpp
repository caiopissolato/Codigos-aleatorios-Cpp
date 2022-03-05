#include <iostream>
#include <fstream>
#include <string>
#include "carros.h"
#include <vector>

using std::string;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::vector;

int main(){
	//ifstream inFile;
	//inFile.open("carros.txt");
	
	vector<Carro> vec_car(64);
	string placa, modelo, desc, obs;
	int ano;
	double km, tx_dia, tx_km;
	bool situacao;/*
	while(inFile >> placa >> ano >> modelo >> desc >> km >> situacao >> tx_dia >> tx_km >> obs){
		Carro car(placa, ano, modelo, desc, km, situacao, tx_dia, tx_km, obs);

		vec_car.push_back(car);
	}*/
	cout << "Tamanho vector: " << vec_car.size() << endl;
	for(int i = 0; i < 1; i++){
		cout << "Placa: ";
		getline(cin, placa);
		vec_car[i].setPlaca(placa);
				
		cout << "Ano: ";
		cin >> ano;
		vec_car[i].setAno(ano);
		
		cout << "Modelo: ";
		cin.ignore();
		getline(cin, modelo);
		vec_car[i].setModelo(modelo);
		
		cout << "Descrição: ";
		getline(cin, desc);
		vec_car[i].setDescricao(desc);
		
		cout << "KM: ";
		cin >> km;
		vec_car[i].setKm(km);
		
		cout << "Situação: ";
		cin >> situacao;
		vec_car[i].setSituacao(situacao);
		
		cout << "Taxa Diária: ";
		cin >> tx_dia;
		vec_car[i].setTx_dia(tx_dia);
		
		cout <<"Taxa KM: ";
		cin >> tx_km;
		vec_car[i].setTx_km(tx_km);
		
		cout << "Observações: ";
		cin.ignore();
		getline(cin, obs);	
		vec_car[i].setObs(obs);
	}
	cout << vec_car[0].getPlaca() << endl;
	return 1;
}
	
