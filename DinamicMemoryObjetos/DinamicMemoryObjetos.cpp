// DinamicMemoryObjetos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Ponto {
    int x;
    int y;
public:
    Ponto(int xx, int yy) {
        cout << "Construindo..." << "\n";
        x = xx;
        y = yy;
    }

    ~Ponto() { cout << "Destruindo..." << "\n"; }

    void imprime() {
        cout << x << "," << y << "\n";
    }
};

int main()
{
    Ponto* p = new Ponto[3]{ Ponto(2,3),Ponto(1,3),Ponto(2,3)};
    for (int i = 0; i < 3; i++)
    {
        p[i].imprime();
    }
   
    
    delete [] p;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
