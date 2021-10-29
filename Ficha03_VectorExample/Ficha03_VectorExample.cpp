// Ficha03_VectorExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



// https://electricalvoice.com/difference-between-array-and-vector/


#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<int> primeiro;                                // vetor vazio de inteiros
    vector<int> segundo(4, 100);                       // 4 inteiros com o valor 100
    vector<int> terceiro(segundo.begin(), segundo.end());  // usando a interação do segundo
    vector<int> quarto(terceiro);                       // copia do terceito

    // construcao usando um array:
    int myints[] = { 16,2,77,29 };
    vector<int> quinto(myints, myints + sizeof(myints) / sizeof(int));

    // mostra o segundo
    cout << "O conteudo do segundo:";
    for (vector<int>::iterator it = segundo.begin(); it != segundo.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    // mostra o terceiro

    // mostra o quarto

    // mostra o quinto
    cout << "O conteudo do quinto:";
    for (vector<int>::iterator it = quinto.begin(); it != quinto.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

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
