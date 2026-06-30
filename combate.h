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

// FUNÇÃO ADICIONADA: Calcula o dano e garante que nunca seja menor que zero
int dano(int ataque, int defesa) {
    int resultado = ataque - defesa;
    
    if (resultado < 0) {
        return 0; // Se a defesa for maior que o ataque, o dano vira zero
    }
    
    return resultado; // Retorna o ataque menos a defesa
}
