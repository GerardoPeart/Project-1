
#ifndef Alumnos_h
#define Alumnos_h

using namespace std;

class Alumnos{
public:
    //
    Alumnos();
    Alumnos(int, string, string);
    int getMatricula();
    string getCarrera();
    string getNombre();
    void setMatricula(int);
    void setCarrera(string);
    void setNombre(string);
    void muestraAlumno();
private:
    int Matricula;
    string Carrera, Nombre;
};

Alumnos::Alumnos()
{
    Matricula = 0;
    Carrera = " ";
    Nombre = " ";
}
Alumnos::Alumnos(int M, string C, string N)
{
    Matricula = M;
    Carrera = C;
    Nombre = N;
}

//Metodos de acceso
int Alumnos::getMatricula()
{
    return Matricula;
}
string Alumnos::getCarrera()
{
    return Carrera;
}
string Alumnos::getNombre()
{
    return Nombre;
}
void Alumnos::setMatricula(int M)
{
    Matricula = M;
}
void Alumnos::setCarrera(string C)
{
    Carrera = C;
}
void Alumnos::setNombre(string N)
{
    Nombre = N;
}
void Alumnos::muestraAlumno()
{

    cout << "Nombre: " << Nombre << endl;
    cout << "Matricula: " << Matricula << endl;
    cout << "Carrera: " << Carrera << endl;
}

#endif
