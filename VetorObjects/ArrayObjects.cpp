// ArrayObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#define N 5

using namespace std;

class Exemplo {
   
    int x, y;

public:
   

    Exemplo(int x, int y)
        : x(x)
        , y(y)
    {
    }

    // Imprimir
    void print() { cout << x << " " << y << endl; }

    int getX() const {
        return x;
    }
};

int main()
{
    // definir um vetor
    vector<Exemplo> v;

    // inserir o objeto no fim 
    for (int i = 0; i < N; i++)
        v.push_back(Exemplo(i, i + 1));

    // imprimir objetos
    for (int i = 0; i < N; i++) {
        v[i].print();
       // cout << v[i].getX() << "\n";
    }
       
    

    return 0;
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
