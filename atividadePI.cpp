#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Dependente{
    private:
    public:
        string nome;
        Dependente(string n){
            nome = n;
        }
      
};
class Cliente{
    private:
    public:
    string nome, cpf;
    vector<Dependente>dependentes;
    Cliente(string n, string c){
        nome = n;
        cpf = c;
    }
    void novoDependente(Dependente d){
        dependentes.push_back(d);
    }
};



class Evento {
    private: 
    public:   
        int duracao;
    
         Evento(int d){
         duracao = d;
    }
    /*int getDuracao(){
        return duracao;
    }
    void setDuracao(int d){
        duracao = d;
    }*/
};

class Pacote{
    private: 
    public:
        string nome;
        vector <Evento*>eventos;
        Pacote(string n){
            nome = n;
        }
        void adicionaEvento(Evento *evento){
            eventos.push_back(evento);
        }
        void listaEventos(){
            cout << "Eventos de " << nome << endl;
            for (Evento* e: eventos)            
            {
                cout << e->duracao << endl;
            }
            
        }
};

int main(){
    vector<Cliente>veccli;
    Cliente c1("Adriano","111111");
    veccli.push_back(c1);
    
    return 0;
}

