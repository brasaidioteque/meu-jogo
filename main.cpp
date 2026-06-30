#include <iostream>
#include <string>

using namespace std;

// compilador precisa ver a struct antes de usar
struct DadosPersonagem {
    string nome;
    int vida;
    int ataque;
};

// compilador precisa ver a função antes de usar
DadosPersonagem exibir(string nome, int vida, int ataque) {
    DadosPersonagem dados;
    dados.nome = "!! " + nome + " !!";
    dados.vida = vida;
    dados.ataque = ataque;
    return dados; 
}

int main() {
    cout << "Hanamori !! :3" << endl;
    cout << "-------------------------\n";

    // Chamada da função
    DadosPersonagem chef = exibir("Mei, a Mestre dos Macarons", 5, 15);

    // Exibindo os dados na tela
    cout << chef.nome << "\n";
    cout << " Vida: " << chef.vida << "\n";
    cout << " Ataque: " << chef.ataque << "\n";
    cout << "-------------------------\n";
    
    return 0;
}
