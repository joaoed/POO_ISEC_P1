// Composicao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class ponto {
    int x;
    int y;
public:
    ponto(int xx, int yy) {
        x = xx;
        y = yy;
    }

    int imprime()
    {
        return x;
    }
};

class rect {
    int comp;
    int altura;
    vector<ponto> array;
  
public:
    rect(int xx, int yy, const initializer_list<ponto>& v) {
        
        comp = xx;
        altura = yy;
        for (auto itm : v) {   
            array.push_back(itm);


        }
    }

    void imprime()
    {
        //cout << comp << altura << p.imprime() << "\n";
    }
};
int main()
{
    rect a(12,11,{ ponto(2,2),ponto(3,4),ponto(4,5),ponto(4,5) });
    a.imprime();
    
    
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
