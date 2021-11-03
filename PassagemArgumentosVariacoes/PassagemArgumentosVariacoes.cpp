// PassagemArgumentosVariacoes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Animal {
    string nome;
    int peso;
    string raca;
public:
    Animal() : nome{ "Kiko" }, peso(20), raca{ "Pug" }
    {
        
    }
    Animal(string n):  peso(0), raca{ "Desconhecida" }
    {
        nome = n;
        
    }

    string GetNome() const
    {
        return nome;
    }

    int GetPeso() const
    {
        return peso;
    }

    string GetRaca() const
    {
        return raca;
    }

    void SetNome(string n)
    {
        nome = n;
    }
};

void AnimalAlteradoReferencia(Animal& a)
{
    a.SetNome("Nome Alterado por Referencia");
}

void AnimalAlteradoValor(Animal a)
{
    a.SetNome("Nome Alterado por Valor");
}

void AnimalAlteradoPonteiro(Animal *a)
{
    (*a).SetNome("Nome Alterado por Ponteiro");
}


int main()
{
    Animal caoComNome("Jon Doe");
    Animal caoSemNome;
    cout << "Ambos os nomes ..." << endl;
    cout << caoComNome.GetNome() << "\n";
    cout << caoSemNome.GetNome() << "\n";


    cout << "Nome do Animal alterado por Referencia ..." << endl;
    AnimalAlteradoReferencia(caoSemNome);
    cout << caoSemNome.GetNome() << "\n";
    cout << "Nome do Animal alterado por Valor ..." << endl;
    AnimalAlteradoValor(caoComNome);
    cout << caoComNome.GetNome() << "\n";
    cout << "Nome do Animal alterado por Ponteiro ..." << endl;
    AnimalAlteradoPonteiro(&caoSemNome);
    cout << caoSemNome.GetNome() << "\n";
}

