// Ficha03_AssociacaoExemplo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <functional> // reference_wrapper
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Medico e Paciente têm uma dependencia circular
class Paciente;

class Doutor
{
private:
	string m_nome{};
	vector<reference_wrapper<const Paciente>> m_paciente{}; 
	/*
	* std::reference_wrapper is a class template that wraps a reference in a copyable, assignable object. 
	* It is frequently used as a mechanism to store references inside standard containers (like std::vector) which cannot normally hold references. 
	*/

public:
	Doutor(const string& name) :
		m_nome{ name }
	{
	}

	void addPaciente(Paciente& pac);

	// Iremos implementar a função Paciente posteriormente
	friend ostream& operator<<(std::ostream& out, const Doutor& doc);

	const string& getName() const { return m_nome; }
};

class Paciente
{
private:
	string m_name{};
	vector<std::reference_wrapper<const Doutor>> m_doutor{}; // so that we can use it here

	
	void addDoutor(const Doutor& doctor)
	{
		m_doutor.push_back(doctor);
	}

public:
	Paciente(const std::string& name)
		: m_name{ name }
	{
	}

	
	friend std::ostream& operator<<(std::ostream& out, const Paciente& patient);

	const string& getName() const { return m_name; }

	
	friend void Doutor::addPaciente(Paciente& patient);
};

void Doutor::addPaciente(Paciente& patient)
{
	
	m_paciente.push_back(patient);

	
	patient.addDoutor(*this);
}

std::ostream& operator<<(std::ostream& out, const Doutor& doctor)
{
	if (doctor.m_paciente.empty())
	{
		out << doctor.m_nome << " nao tem pacientes agora";
		return out;
	}

	out << doctor.m_nome << " esta a consultar pacientes: ";
	for (const auto& patient : doctor.m_paciente)
		out << patient.get().getName() << ' ' ;

	return out;
}

ostream& operator<<(std::ostream& out, const Paciente& patient)
{
	if (patient.m_doutor.empty())
	{
		out << patient.getName() << " nao tem medicos agora";
		return out;
	}

	out << patient.m_name << " está a ser consultados por medicos: ";
	for (const auto& doctor : patient.m_doutor)
		out << doctor.get().getName() << ' ' ;

	return out;
}

int main()
{
	
	Paciente Pedro{ "Pedro" };
	Paciente Luis{ "Luis" };
	Paciente Luisa{ "Luisa" };

	Doutor Jorge{ "Jorge" };
	Doutor Raul{ "Raul" };

	Jorge.addPaciente(Pedro);

	Raul.addPaciente(Pedro);
	Raul.addPaciente(Luisa);

	cout << Jorge << '\n';
	cout << Raul << '\n';
	cout << Pedro << '\n';
	cout << Luis << '\n';
	cout << Luisa << '\n';

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
