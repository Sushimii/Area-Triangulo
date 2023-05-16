#include <iostream>
#include <cmath>
using namespace std;

//Criando classe de nome "Triangulo"
class Triangulo {
    //Criando variaveis do tipo privado
    private:
    //Variaveis do tipo double
    double a, b, c;
    //Criando algo publico
    public:
    //Recebendo valores e convertendo em outras variaveis do tipo double
    Triangulo(double lado1, double lado2, double lado3 ) {
        a = lado1;
        b = lado2;
        c = lado3;
    }
    // Criando formula do tipo double
    double calculaArea() {
        //Formula de calculo de area
        double p = (a + b + c) / 2.0;
        //Formula de heron
        double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
    }
    //pegando os valores para as variaveis do tipo double
    double getLado1() { return a; }
    double getLado2() { return b; }
    double getLado3() { return c; }
    
};
//Programa principal
int main() {
    //Variaveis do tipo double
    double a, b, c;
    //Mensagem pedindo pro usuario adicionar valores as variaveis
    cout << "Digite as medidas dos lados do Triangulo X: ";
    //Valores sendo adcionados as variaveis
    cin >> a >> b >> c;
    //Valores das variaveis sendo adicionados a um objeto
    Triangulo X(a, b, c);
    
    //Mensagem pedindo pro usuario adicionar valores as variaveis
    cout << "Digite as medidas dos lados do Triangulo Y: ";
    //Valores sendo adcionados as variaveis
    cin >> a >> b >> c;
    //Valores das variaveis sendo adicionados a um objeto
    Triangulo Y(a, b, c);
    
    //Puxando a formula para calcular a area do primeiro objeto
    double areaX = X.calculaArea();
    //Puxando a formula para calcular a area do segundo objeto
    double areaY = Y.calculaArea();
    
    //Tela mostrando a area do primeiro objeto
    cout << "Area do Triangulo X: " << areaX << endl;
    //Tela mostrando a area do segundo objeto
    cout << "Area do Triangulo Y: " << areaY << endl;
    
    //Condição se variavel "areaX" for maior que "areaY"
    if (areaX > areaY) {
        
        //Mensagem caso condição for cumprida
        cout << "Triangulo X tem a maior area. " << endl;
    }
    //Condição se variavel "areaY" for maior que "areaX"
    else if (areaY > areaX) {
        //Mensagem caso condição for cumprida
        cout << "Triangulo Y tem a maior area. " << endl;
    }
    else {
        cout << "Ambos os triangulos tem a mesma area. " << std::endl;
    }
    
    return 0;
}
