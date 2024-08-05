#include <iostream>

using namespace std;

struct dato {
  int a;
  float b;
};

void recorrerArreglo(int,int, dato*);

int main() {
  int cantidadDatos;
  
  cout << "Ingrese la cantidad de datos a ingresar: ";
  cin >> cantidadDatos;

  dato datos[cantidadDatos];

  for (int i = 0; i < cantidadDatos; i++){
  	cout << "Dato " << i+1 << " " << endl;
    cout << "Ingrese el valor entero: ";
    cin >> datos[i].a;
    cout << "Ingrese el valor decimal: ";
    cin >> datos[i].b;
  }

  cout<<endl;
  cout << "Los datos ingresados son: " << endl;
  for (int i = 0; i < cantidadDatos; i++){
    cout << "Dato " << i+1 << " " << endl;
    cout << "Entero: " << datos[i].a << endl;
    cout << "Decimal: " << datos[i].b << endl;
  }


  int cantidadResultadoBusqueda = 0;
  int datoBuscar = 5;
  for (int i = 0; i < cantidadDatos; i++){
    if (datos[i].a == datoBuscar){
      cantidadResultadoBusqueda++;
    }
  }
  cout<<endl;
  cout << "La cantidad de datos con el valor " << datoBuscar << " es: " << cantidadResultadoBusqueda;

  int sumatoriaDecimales = 0;
  for (int i = 0; i < cantidadDatos; i++){
    sumatoriaDecimales += datos[i].b;
  }
  cout<<endl;
  cout << "La sumatoria de los decimales es: " << sumatoriaDecimales;


  cout<<endl;
  cout<<"El arreglo es: "<<endl;
  recorrerArreglo(0, sizeof(datos)/sizeof(datos[0]), datos);
    
  return 0;
  
}

void recorrerArreglo(int posicion, int longitud, dato* arr){
  
  if (posicion == longitud) {
    return;
  }

  cout << arr[posicion].a << " " << arr[posicion].b << endl;

  recorrerArreglo(posicion + 1, longitud, arr); 
}

