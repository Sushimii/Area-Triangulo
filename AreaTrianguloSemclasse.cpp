#include <iostream>
#include <cmath>
using namespace std;

// função para calcular area do triangulo
double calcularAreaTriangulo(double a, double b, double c) {
    //formula para calcular area
    double p = (a + b + c) / 2; 
    // fórmula de heron
    return sqrt(p * (p - a) * (p - b) * (p - c));
    
}

int main() {
    //Declaração de variaveis do tipo double
    double xa, xb, xc, ya, yb, yc;
    
    // Digitando as medidas dos lados do triangulo x
    cout << "Digite as medidas dos lados do triangulo X (separadas por espaço): ";
    //Valores sendo atribuidos as variaveis "xa,xb,xc"
    cin >> xa >> xb >> xc;

    // Digitando as medidas dos lados do triangulo y
    cout << "Digite as medidas dos lados do triangulo Y (separadas por espaço): ";
    //Valores sendo atribuidos as variaveis "ya,yb,yc"
    cin >> ya >> yb >> yc;

    //chamando a função de calculo para o tringulo x
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    //chamando a função de calculo para o tringulo y
    double areaY = calcularAreaTriangulo(ya, yb, yc);

    // Mostrando o valor da area do triangulo x
    cout << "Area do Triangulo X: " << areaX << endl;
    // Mostrando o valor da area do triangulo y
    cout << "Area do Triangulo Y: " << areaY << endl;

    // Condição se areax for maior que areat
    if (areaX > areaY) {
        //Mensagem caso a condição acima seja cumprida
        cout << "O triangulo X possui a maior area." << endl;
    //Condição se areay for maior que areax
    } else if (areaY > areaX) {
        //Mensagem caso a condição acima seja cumprida
        cout << "O triangulo Y possui a maior area." << endl;
    //Condição se nenhuma das outras condiçoes forem cumpridas
    } else {
        //Mensagem caso a condição acima seja cumprida
        cout << "Os dois triangulos tem a mesma area." << endl;
    }

    return 0;
}