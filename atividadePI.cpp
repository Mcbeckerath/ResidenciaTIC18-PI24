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
    void listaDependente(){
            cout << "Dependente de " << nome << endl;
            for (Dependente d: dependentes)            
            {
                cout << d.nome << endl;
            }
        }    
};



class Evento {
    private: 
    public:   
        int duracao;
        Evento(int d){
         duracao = d;
        }
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


class Roteiro:public Evento{
    public:
        string atividade;
        Roteiro(int d, string _atividade):Evento(d){
            atividade = _atividade;
        }
     
};

class Deslocamento: public Evento{
    public:
        string origem;
        string destino;
        Deslocamento(int d, string _origem, string _destino):Evento(d){
            origem = _origem;
            destino = _destino;
        }
};

class Pernoite: public Evento{
    public:
        string local;
        Pernoite(int d, string _local):Evento(d){
            local = _local;
        }
};

class Reserva{
    public:
        Cliente* clienteptr;
        Pacote* pacoteptr;
        Reserva(Cliente* _clienteptr, Pacote* _pacoteptr){
            clienteptr = _clienteptr;
            pacoteptr = _pacoteptr;
        }

};

class App{
    public:
     void cadastrarCliente(string _nome, string _cpf){
       Cliente novoCliente(_nome, _cpf);
       return novoCliente;
    }   
};

int main(){
    vector<Cliente>veccli;
   // vector<Dependente*>vecdep;
    Cliente c1("Adriano","111111");
    veccli.push_back(c1);
    Dependente d1("Adriano Filho");
    c1.novoDependente(d1);
    c1.listaDependente();
    App.cadastrarCliente("Bruno", "222222");
    
    
    
    return 0;
}

