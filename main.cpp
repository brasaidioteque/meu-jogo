#include <iostream>
#include <string>

using namespace std;

// aqui fica a ficha do boneco pra guardar tudo junto
struct dadospersonagem {
    string nome;
    int vida;
    int ataque;
};

// bota os enfeites no nome e arruma a ficha
dadospersonagem exibir(string nome, int vida, int ataque) {
    dadospersonagem dados;
    dados.nome = "!! " + nome + " !!";
    dados.vida = vida;
    dados.ataque = ataque;
    return dados; 
}

// acalcula odano e não deixa ficar negativo
int dano(int ataque, int defesa) {
    int resultado = ataque - defesa;
    if (resultado < 0) {
        return 0;
    }
    return resultado;
}

int main() {
    cout << "hanamori !! :3" << endl;
    cout << "-------------------------\n";

    // criando a mei com os status dela
    dadospersonagem chef = exibir("mei, a mestre dos macarons", 5, 15);

    // mostrando os dados na tela pra ver se tá certinho
    cout << chef.nome << "\n";
    cout << " vida: " << chef.vida << "\n";
    cout << " ataque: " << chef.ataque << "\n";
    cout << "-------------------------\n";
    
    // inventei uma defesa pro inimigo só pra testar
    int defesadoinimigo = 7; 
    
    // calculando o dano do ataque
    int danofinal = dano(chef.ataque, defesadoinimigo);
    
    // mostrando pro jogador o tanto de vida que o inimigo perdeu
    cout << "mei ataca um monstro com " << defesadoinimigo << " de defesa!\n";
    cout << "!! dano causado: " << danofinal << " !!\n";
    cout << "-------------------------\n";
    
    return 0;
}
