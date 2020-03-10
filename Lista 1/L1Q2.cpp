#include <iostream>

using namespace std;

/*MDC: maior número que divide 2 outros numeros. Utilizei o algoritmo de Euclides visto em FMC1.
Euclides: Divide o maior numero pelo menor até o resto ser 0.*/

int MDC (int n1 , int n2 ) {

    //Caso base: Segundo Euclides, o algoritmo para quando o resto for 0
    if (n2 == 0)
        return n1;
    else
        return MDC (n2, n1%n2); //O segundo termo volta sendo o resto de n1 dividido por n2
}

int main() {

    int n1, n2;

    cout << "Entre com os dois numeros os quais deseja saber o MDC:" << endl << endl;
    cout << "Numero 1: ";
    cin >> n1;
    cout << "Numero 2: ";
    cin >> n2;
    cout << endl << "MDC("<< n1 << "," << n2 << ") eh " << MDC(n1, n2) << "." << endl << endl;

    return 0;
}