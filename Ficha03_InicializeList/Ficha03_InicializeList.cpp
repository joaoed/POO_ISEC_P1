// Ficha03_InicializeList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
using namespace std;

class MyNumber
{
private:
    vector<int> mVec;
    
public:
    MyNumber(const initializer_list<int>& v) {
        for (auto itm : v) {   // The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer
            mVec.push_back(itm);
          
            
        }
    }

    void print() {
        for (auto itm : mVec) {
            cout << itm << " " ;
            
        }
       // cout << "\n" << mVec.size();
    }

};

class MyString
{
private:
    vector<string> mStringVec;

public:
    MyString( const initializer_list<string>& v) {
        for (auto itm : v) {   // The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer
            mStringVec.push_back(itm);


        }
    }

    void print() {
        for (auto itm : mStringVec) {
            cout << itm << " ";

        }
        //cout << "\n" << mStringVec.size();
    }

};



int main()
{
    MyNumber m = { 1,2 };

    MyString s = { "Rtp1","Rtp2" };
    m.print();  // 1 2 3 4

    s.print();
    
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
