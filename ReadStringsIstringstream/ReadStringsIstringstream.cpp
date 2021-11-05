// ReadStringsIstringstream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    
   

   

    char dados[200];

    // abrir um ficheiro para escrita
    ofstream outfile;
    outfile.open("myfile.dat", ios::binary | ios::app);

    cout << "Comando: ";
    cin.getline(dados, 100);
    // Escrever para o ficheiro
    outfile << dados << endl;
    // fechar o ficheiro myfile.dat
    outfile.close();


   
    string a ;
    // Object class of istringstream

   
    istringstream my_stream(a);
    string token;

    size_t pos = -1;

    ifstream infile;
    infile.open("myfile.dat");

     char line[100];
    //infile >> dados;
    while (!infile.eof()) {
        infile.getline(line, 100);
        istringstream my_stream(line);
        while (my_stream >> token) {

            while ((pos = token.rfind(' '))
                != std::string::npos) {
                token.erase(pos, 1);
            }
            cout << token << '\n';
            // Imprime o token
            if (token.compare("liga") == 0)
            {
                cout << "comando validado" << endl;

            }

       // cout << line << endl;
    }

    // Traverse till stream is valid
    
        
        //cout << token << '\n';
    }
   
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
