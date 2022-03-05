#include <iostream>
#include <random>

using std::endl;
using std::cout;
using std::cin;

void embaralhar(char *vet, int n){
    for (int i = 0; i < n; i++){
		int r = rand() % n;
        char temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;
	}
}

int main(){
    
    srand(time(NULL));

    char minusculas[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char maiusculas[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char pontuacao[26]  = {'!', '@', '#', '$', '%', '&', '*', '-', '+', '/', '(', ')', '_', '=', '[', ']', '{', '}', '?', '<', '>', ':', ';', ',', '.', '|'};
    char numeros[10]    = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    int k, i = 0, x, min = 0, mai = 0, pont = 0, num = 0, v;
    cout << "Quantos digitos voce deseja gerar? ";
    cin >> k;
    char vet[k];
    v = k;
    for(int z = 0; z < 1; z++){
        cout << "Quantas letras minusculas: ";
        cin  >> min;
        if(min <= k){
            while(i < min){
                x = rand() % 26;
                vet[v-1] = minusculas[x];
                i++;
                v--;
            }
            cout << "Quantas letras maiusculas: ";
            cin  >> mai;
            i = 0;
            if((min + mai) <= k){
                while(i < mai){
                    x = rand() % 26;
                    vet[v-1] = maiusculas[x];
                    i++;
                    v--;
                }  
                cout << "Quantas pontuacoes: ";
                cin  >> pont;
                i = 0;
                if((min + mai + pont) <= k){
                    while(i < pont){
                        x = rand() % 26;
                        vet[v-1] = pontuacao[x];
                        i++;
                        v--;
                    }       
                    cout << "Quantos numeros: ";
                    cin  >> num;
                    i = 0;
                    if((min + mai + pont + num) == k){
                        while(i < num){
                            x = rand() % 10;
                            vet[v-1] = numeros[x];
                            i++;
                            v--;
                        }
                    }else{
                        k = 0;
                        cout << "Voce nao inseriu a quantidade de digitos certa." << endl;    
                    }
                }else{
                    k = 0;
                    cout << "Voce inseriu um numero maior do que a quantidade de digitos." << endl;
                }
            }else{
                k = 0;
                cout << "Voce inseriu um numero maior do que a quantidade de digitos." << endl;
            }       
        }else{
            k = 0;
            cout << "Voce inseriu um numero maior do que a quantidade de digitos." << endl;
        }          
    }  


    if(k != 0){
        embaralhar(vet, k);
        cout << "Senha gerada: ";
        for(int a = 0; a < k; a++){
            cout << vet[a]; 
        }
        
        cout << endl;
    } 


    return 1;
}