#include <iostream>

using namespace std;

int digitSum(int n) {


    //Caso base - ultimo dígito. Ex: 9%10 = 9 ; 5%10 = 5.
    if(n % 10 == n){
        return n;
    }else{
        return ((n % 10) + digitSum(n/10));
    }

}

int main(){

    int num;

    cout << " Entre com um numero inteiro não negativo para saber a SOMA dos seus digitos:";
    cin >> num;

    //PERMITIDO SOMENTE NUMEROS MAIORES OU IGUAIS A 0
    while (num < 0){
        cout << endl << "Numero fora do intervalo permitido!!" << endl << "Tente novamente..." << endl << endl;
        cin >> num;
    }

    cout << endl << "Calculando..." << endl << endl;
    cout << "Soma dos digitos do numero " << num << " eh: " << digitSum(num) << endl << endl;

    return 0;
}