#include <iostream>
using namespace std;

class Personaje
{    
public:
    Persona(int v = 100, string n ="Steve", string p = "Mago"):
        establecerPersonaje(v, n, p)
    {        
    }

    Personaje &establecerPersonje(int _vida, string _nombre, string _poderes) {
        establecerVida(_vida);
        establecerNombre(_nombre);
        establecerPoderes(_poderes);
        return *this;
    }

    Personaje &establecerVida(int _vida) {
        if (typeof(_vida) == int)
            vida = _vida;
        else
            throw invalid_argument ("LA vida solo tiene que ser 100");
        return *this;
    }

    Personaje &establecerNombre(string _nombre) {
        if ((typeof(_nombre) == string) && (_nombre.substr(25)) )
            nombre = _nombre;
        else
            throw invalid_argument ("Aqui solo se aceotan textos, o el nombre tiene que tener 25 caracteres")
        return *this;
    }

    Personaje &establecerPoderes(string _poder) {
        if ((typeof(_poderes) == string) && (_nombre.substr(15)) )
            poderes = _poderes;
        else
            throw invalid_argument ("Aqui solo se aceotan textos, o el poder tiene que tener 15 caracteres")
        return *this;
    }

private:
    unsigned int vida;
    static string nombre;
    static string poderes;
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
