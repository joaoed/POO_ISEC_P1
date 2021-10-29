// Ficha03_FriendFuntions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

class Resistencia
{
private:
    int m_value;
public:
    Resistencia() { m_value = 0; }
    void add(int value) { m_value += value; }

   
    friend void reset(Resistencia& accumulator);
};

// reset() is friend function 
void reset(Resistencia& acc)
{
    // pode aceder a zonas privados
    acc.m_value = 0;
}

int main()
{
    Resistencia acc;
    acc.add(5);  
    reset(acc);  

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
