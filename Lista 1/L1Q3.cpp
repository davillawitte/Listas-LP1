#include <iostream>

using namespace std;

/* Pensamento inicial: Sucessivas divisões por 2 e pega o resto*/

int convertBin (int n){

    //Caso base: Para quando o numero a ser dividido foi menor que 2 (ou vai ser 0 ou vai ser 1)
    if(n < 2){
        return n;
    }else{

    }


}

int main (){

    int n;

    cout << "Entre com o numero decimal que deseja converter para binario: ";
    cin >> n;
    cout << endl << "O numero " << n << " em binario eh " << convertBin(n) << endl;

    return 0;
}


