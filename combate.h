#include <iostream>
#include <string>

using namespace std;

// Criamos uma estrutura para segurar os dados do personagem juntos
struct DadosPersonagem {
    string nome;
    int vida;
    int ataque;
};

// A função agora retorna a nossa estrutura personalizada
DadosPersonagem exibir(string nome, int vida, int ataque) {
    DadosPersonagem dados;
    dados.nome = "? " + nome + " ?";
    dados.vida = vida;
    dados.ataque = ataque;
    
    return dados; // Retorna tudo de uma vez
}

int main() {
    // Chamamos a função e guardamos o resultado na ficha da nossa chef
    DadosPersonagem chef = exibir("Mei, a Mestre dos Macarons", 5, 15);
    
    // Imprimindo os resultados acessando as variáveis da struct (.nome, .vida, .ataque)
    cout << chef.nome << "\n";
    cout << "?? Vida: " << chef.vida << " | ?? Ataque: " << chef.ataque << "\n";
    cout << "-------------------------\n";

    return 0;
}
