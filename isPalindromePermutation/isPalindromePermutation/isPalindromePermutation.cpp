// isPalindromePermutation.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
// C++ implementation to check if
// characters of a given string can
// be rearranged to form a palindrome

#include <string>
#include <iostream>
using namespace std;

#define NO_OF_CHARS 256

// Function for test PalindromePermutation
bool canFormPalindrome(string words)
{
	// make a vector for score begin in 0

	int count1[NO_OF_CHARS] = { 0 };

	//incrementa toda a contagem na matriz
	//Increment all score in matrix

	for (int i = 0; words[i]; i++)
		count1[words[i]]++;

	// Score the odd
	int odd = 0;
	for (int i = 0; i < NO_OF_CHARS; i++) {
		if (count1[i] & 1)
			odd++;

		if (odd > 1)
			return false;
	}

	// volta verdadeiro se a contagem for 0 ou impar se for 1
	//back the true if the score be 0 or odd if be 1
	return true;
}


int main()
{
	string words;
	cout << "Write your word: ";
	cin>> words;

	canFormPalindrome(words)
		? cout << "Yes\n"
		: cout << "No\n";

	return 0;
}




// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
