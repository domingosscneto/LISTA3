//Domingos Soares do Carmo Neto
//TIA: 32032889
#include <iostream>
#include "StaticQueue.h"
#include <ctime>
#include <string>
#pragma warning(disable: 4996)
using namespace std;

void vendedor(StaticQueue& aguaA, StaticQueue& aguaB, StaticQueue& estanteA, StaticQueue& estanteB, StaticQueue& prateleiraA, StaticQueue& prateleiraB, StaticQueue& gavetaA, StaticQueue& gavetaB, StaticQueue& tempoA, StaticQueue& tempoB, StaticQueue& diaA, StaticQueue& diaB, StaticQueue& mesA, StaticQueue& mesB, StaticQueue& anoA, StaticQueue& anoB, StaticQueue& horaA, StaticQueue& horaB, StaticQueue& minA, StaticQueue& minB, StaticQueue& secA, StaticQueue& secB)
{
	time_t timer;
	struct tm* horarioLocal;

	time(&timer); // Obtem informações de data e hora
	horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

	int dia = horarioLocal->tm_mday;
	int mes = horarioLocal->tm_mon + 1;
	int ano = horarioLocal->tm_year + 1900;
	int hora = horarioLocal->tm_hour;
	int min = horarioLocal->tm_min;
	int sec = horarioLocal->tm_sec;

	int horaSegundos = hora * 3600;
	int minSegundos = min * 60;
	int totalSegundos = horaSegundos + minSegundos + sec;

	char agua, marca, estante, prateleira, gaveta;
	cout << "\nQual marca de água gostaria de armazenar?[A] ou [B]:\n";
	cin >> agua;
	switch (agua)
	{
	case 'A':
		marca = 'a';
		Enqueue(aguaA, marca);
		cout << "";
		cout << "\nQual estante gostaria de armazenar?";
		cin >> estante;
		Enqueue(estanteA, estante - 48);
		cout << "Qual prateleira gostaria de armazenar?";
		cin >> prateleira;
		Enqueue(prateleiraA, prateleira - 48);
		cout << "Qual gaveta gostaria de armazenar?";
		cin >> gaveta;
		Enqueue(gavetaA, gaveta - 48);
		Enqueue(tempoA, totalSegundos);
		cout << "\nÁgua marca A armazenada na:\n" << "\nEstante: " << Front(estanteA) << "\nPrateleira: " << Front(prateleiraA) << "\ngaveta: " << Front(gavetaA) << "\n";
		cout << "\nHorário de cadastro: " << hora << ":" << min << ":" << sec << "\n";
		cout << "Data de cadastro: " << dia << "/" << mes << "/" << ano << "\n";
		Enqueue(diaA, dia);
		Enqueue(mesA, mes);
		Enqueue(anoA, ano); 
		Enqueue(horaA, hora); 
		Enqueue(minA, min); 
		Enqueue(secA, sec);
		break;
	case 'a':
		marca = 'a';
		Enqueue(aguaA, marca);
		cout << "";
		cout << "\nQual estante gostaria de armazenar?";
		cin >> estante;
		Enqueue(estanteA, estante - 48);
		cout << "Qual prateleira gostaria de armazenar?";
		cin >> prateleira;
		Enqueue(prateleiraA, prateleira - 48);
		cout << "Qual gaveta gostaria de armazenar?";
		cin >> gaveta;
		Enqueue(gavetaA, gaveta - 48);
		Enqueue(tempoA, totalSegundos);
		cout << "\nÁgua marca A armazenada na:\n" << "\nEstante: " << Front(estanteA) << "\nPrateleira: " << Front(prateleiraA) << "\ngaveta: " << Front(gavetaA) << "\n";
		cout << "\nHorário de cadastro: " << hora << ":" << min << ":" << sec << "\n";
		cout << "Data de cadastro: " << dia << "/" << mes << "/" << ano << "\n";
		Enqueue(diaA, dia);
		Enqueue(mesA, mes);
		Enqueue(anoA, ano);
		Enqueue(horaA, hora);
		Enqueue(minA, min);
		Enqueue(secA, sec);
		break;
	case 'B':
		marca = 'b';
		Enqueue(aguaB, marca);
		cout << "";
		cout << "\nQual estante gostaria de armazenar?";
		cin >> estante;
		Enqueue(estanteB, estante - 48);
		cout << "Qual prateleira gostaria de armazenar?";
		cin >> prateleira;
		Enqueue(prateleiraB, prateleira - 48);
		cout << "Qual gaveta gostaria de armazenar?";
		cin >> gaveta;
		Enqueue(gavetaB, gaveta - 48);
		Enqueue(tempoB, totalSegundos);
		cout << "\nÁgua marca A armazenada na:\n" << "\nEstante: " << Front(estanteB) << "\nPrateleira: " << Front(prateleiraB) << "\ngaveta: " << Front(gavetaB) << "\n";
		cout << "\nHorário de cadastro: " << hora << ":" << min << ":" << sec << "\n";
		cout << "Data de cadastro: " << dia << "/" << mes << "/" << ano << "\n";
		Enqueue(diaB, dia);
		Enqueue(mesB, mes);
		Enqueue(anoB, ano);
		Enqueue(horaB, hora);
		Enqueue(minB, min);
		Enqueue(secB, sec);
		break;
	case 'b':
		marca = 'b';
		Enqueue(aguaB, marca);
		cout << "";
		cout << "\nQual estante gostaria de armazenar?";
		cin >> estante;
		Enqueue(estanteB, estante - 48);
		cout << "Qual prateleira gostaria de armazenar?";
		cin >> prateleira;
		Enqueue(prateleiraB, prateleira - 48);
		cout << "Qual gaveta gostaria de armazenar?";
		cin >> gaveta;
		Enqueue(gavetaB, gaveta - 48);
		Enqueue(tempoB, totalSegundos);
		cout << "\nÁgua marca A armazenada na:\n" << "\nEstante: " << Front(estanteB) << "\nPrateleira: " << Front(prateleiraB) << "\ngaveta: " << Front(gavetaB) << "\n";
		cout << "\nHorário de cadastro: " << hora << ":" << min << ":" << sec << "\n";
		cout << "Data de cadastro: " << dia << "/" << mes << "/" << ano << "\n";
		Enqueue(diaB, dia);
		Enqueue(mesB, mes);
		Enqueue(anoB, ano);
		Enqueue(horaB, hora);
		Enqueue(minB, min);
		Enqueue(secB, sec);
		break;
	}
}

void compra(StaticQueue& aguaA, StaticQueue& aguaB, StaticQueue& estanteA, StaticQueue& estanteB, StaticQueue& prateleiraA, StaticQueue& prateleiraB, StaticQueue& gavetaA, StaticQueue& gavetaB, StaticQueue& tempoA, StaticQueue& tempoB, StaticQueue& diaA, StaticQueue& diaB, StaticQueue& mesA, StaticQueue& mesB, StaticQueue& anoA, StaticQueue& anoB, StaticQueue& horaA, StaticQueue& horaB, StaticQueue& minA, StaticQueue& minB, StaticQueue& secA, StaticQueue& secB)
{
	cout << "\nQual marca de água gostaria de comprar:\n" << "\n[0] Comprar marca A\n" << "[1] Comprar marca B\n" << "[2] Comprar qualquer marca\n";
	int venda;
	cin >> venda;
	switch (venda)
	{
	case 0:
		if (IsEmpty(aguaA))
		{
			cout << "Estoque da marca A está vazia!\n";
			break;
		}
		else
		{
			cout << "\nPRODUTO COMPRADO COM SUCESSO!\n" << "Marca: A\n" << "\nEstante: " << Front(estanteA) << "\nPrateleira: " << Front(prateleiraA) << "\ngaveta: " << Front(gavetaA) << "\n";
			cout << "\nHorário de cadastro: " << Front(horaA) << ":" << Front(minA) << ":" << Front(secA) << "\n";
			cout << "Data de cadastro: " << Front(diaA) << "/" << Front(mesA) << "/" << Front(anoA) << "\n";
			Dequeue(aguaA);
			Dequeue(estanteA);
			Dequeue(prateleiraA);
			Dequeue(gavetaA);
			Dequeue(tempoA);
			Dequeue(diaA);
			Dequeue(mesA);
			Dequeue(anoA);
			Dequeue(horaA);
			Dequeue(minA);
			Dequeue(secA);
			break;
		}
	case 1:
		if (IsEmpty(aguaB))
		{
			cout << "Estoque da marca B está vazia!\n";
			break;
		}
		else
		{
			cout << "\nPRODUTO COMPRADO COM SUCESSO!\n" << "Marca: B\n" << "\nEstante: " << Front(estanteB) << "\nPrateleira: " << Front(prateleiraB) << "\ngaveta: " << Front(gavetaB) << "\n";
			cout << "\nHorário de cadastro: " << Front(horaB) << ":" << Front(minB) << ":" << Front(secB) << "\n";
			cout << "Data de cadastro: " << Front(diaB) << "/" << Front(mesB) << "/" << Front(anoB) << "\n";
			Dequeue(aguaB);
			Dequeue(estanteB);
			Dequeue(prateleiraB);
			Dequeue(gavetaB);
			Dequeue(tempoB);
			Dequeue(diaB);
			Dequeue(mesB);
			Dequeue(anoB);
			Dequeue(horaB);
			Dequeue(minB);
			Dequeue(secB);
			break;
		}
	case 2:
		if ((Front(tempoA) < Front(tempoB) || Front(tempoB) == 0) && !IsEmpty(aguaA))
		{
			cout << "\nPRODUTO COMPRADO COM SUCESSO!\n" << "Marca: A\n" << "\nEstante: " << Front(estanteA) << "\nPrateleira: " << Front(prateleiraA) << "\ngaveta: " << Front(gavetaA) << "\n";
			cout << "\nHorário de cadastro: " << Front(horaA) << ":" << Front(minA) << ":" << Front(secA) << "\n";
			cout << "Data de cadastro: " << Front(diaA) << "/" << Front(mesA) << "/" << Front(anoA) << "\n";
			Dequeue(aguaA);
			Dequeue(estanteA);
			Dequeue(prateleiraA);
			Dequeue(gavetaA);
			Dequeue(tempoA);
			Dequeue(diaA);
			Dequeue(mesA);
			Dequeue(anoA);
			Dequeue(horaA);
			Dequeue(minA);
			Dequeue(secA);
		}
		else if ((Front(tempoB) < Front(tempoA) || Front(tempoA) == 0) && !IsEmpty(aguaB))
		{
			cout << "\nPRODUTO COMPRADO COM SUCESSO!\n" << "Marca: B\n" << "\nEstante: " << Front(estanteB) << "\nPrateleira: " << Front(prateleiraB) << "\ngaveta: " << Front(gavetaB) << "\n";
			cout << "\nHorário de cadastro: " << Front(horaB) << ":" << Front(minB) << ":" << Front(secB) << "\n";
			cout << "Data de cadastro: " << Front(diaB) << "/" << Front(mesB) << "/" << Front(anoB) << "\n";
			Dequeue(aguaB);
			Dequeue(estanteB);
			Dequeue(prateleiraB);
			Dequeue(gavetaB);
			Dequeue(tempoB);
			Dequeue(diaB);
			Dequeue(mesB);
			Dequeue(anoB);
			Dequeue(horaB);
			Dequeue(minB);
			Dequeue(secB);
			break;
		}
		else
		{
			cout << "\nNenhuma água no estoque!\n";
		}
	}
}


void Menu()
{
	StaticQueue aguaA = Create();
	StaticQueue aguaB = Create();
	StaticQueue estanteA = Create();
	StaticQueue estanteB = Create();
	StaticQueue prateleiraA = Create();
	StaticQueue prateleiraB = Create();
	StaticQueue gavetaA = Create();
	StaticQueue gavetaB = Create();
	StaticQueue tempoA = Create();
	StaticQueue tempoB = Create();
	StaticQueue diaA = Create();
	StaticQueue diaB = Create();
	StaticQueue mesA = Create();
	StaticQueue mesB = Create();
	StaticQueue anoA = Create();
	StaticQueue anoB = Create();
	StaticQueue horaA = Create();
	StaticQueue horaB = Create();
	StaticQueue minA = Create();
	StaticQueue minB = Create();
	StaticQueue secA = Create();
	StaticQueue secB = Create();


	string escolhaMenu;
	bool exit = true;
	while (exit)
	{
		cout <<  "\n--------------------------------\n" << "MENU:\n" << "\nO que deseja fazer: \n" << "[1] - Cadastrar novo produto \n" << "[2] - Comprar produto \n" << "[3] - Sair \n" << "--------------------------------\n";
		cin >> escolhaMenu;
		if (escolhaMenu == "1")
		{
			vendedor(aguaA, aguaB, estanteA, estanteB, prateleiraA, prateleiraB, gavetaA, gavetaB, tempoA, tempoB, diaA, diaB, mesA, mesB, anoA, anoB, horaA, horaB, minA, minB, secA, secB);
		}
		else if (escolhaMenu == "2")
		{
			compra(aguaA, aguaB, estanteA, estanteB, prateleiraA, prateleiraB, gavetaA, gavetaB, tempoA, tempoB, diaA, diaB, mesA, mesB, anoA, anoB, horaA, horaB, minA, minB, secA, secB);
		}
		else if (escolhaMenu == "3")
		{
			exit = false;
		}
		else
		{
			cout << "Escolha uma alternativa válida\n";
		}
	}
}

int main()
{
	setlocale(LC_ALL, "pt_BR");
	Menu();
}