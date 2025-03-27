#include <iostream>
using namespace std;

// Función para pausas
void pausar() {
    cout << "\nPresiona Enter para continuar...";
    cin.ignore();
    cin.get();
}

// Función para leer elecciones simples
int leerEleccion(string mensaje) {
    int opcion;
    cout << mensaje;
    cin >> opcion;
    // Validar entrada básica
    while (opcion != 1 && opcion != 2) {
        cout << "Por favor, elige 1 o 2: ";
        cin >> opcion;
    }
    return opcion;
}

int main() {
    // Variables principales
    bool investigoSotano = false;
    bool cerroPuerta = false;

    // Introducción
    cout << "============================\n";
    cout << "| La Cabaña Misteriosa     |\n";
    cout << "============================\n\n";

    cout << "  llegas a una cabaña vieja en el bosque.\n";
    cout << "Hay rumores de que está cabaña esta maldita porque hay criaturas alrededor de ellas...\n";
    cout<<"Es una cabaña que la heredaste por algun lejano familiar"<<endl;
    cout<<"Y querias hecharle un vistazo a sus condiciones de la cabaña"<<endl;
    cout<<"notas que para acceder a la cabaña tienes que ingresar un codigo"<<endl;
    cout<<"pillas una nota que da algo de informacion pero esta escondida en frase"<<endl;
    cout<<"la nota dice: Cuando te los encuentres veras que el cuarto de abajo sera util para tu supervivencia"<<endl;
    
    
    cout<<"ingrese el codigo para entrar a la cabaña"<<endl;
    int code;
    cin>>code;
    while (code!=34){
        cout<<"no es el codigo correcto vuelve a intentarlo"<<endl ;
        cin>>code;
    
    }
    pausar();
    // Primera decisión
    cout << "Escuchas ruidos extraños en el sótano.Parece venir del sotano.\n";
    cout << "1. Bajar a investigar.\n";
    cout << "2. Ignorar los ruidos.\n";
     int opcion = leerEleccion("Tu elección: ");
    if (opcion == 1) {
        investigoSotano = true;
        cout << "Encuentras un diario extraño con notas aterradoras.\n";
        cout<<"Donde habla sobre sus debilidades de las criaturas"<<endl;
    } else {
        cout << "Deciden ignorar los ruidos y quedarse en la sala principal.\n";
    }
    pausar();

    // Segunda decisión
    cout << "Luego, empiezas a escuchar pasos afuera de la cabaña.\n";
    cout<<"¿Parecen ser ellos o son personas?"<<endl;
    cout << "1. Cerrar la puerta con llave.\n";
    cout << "2. Dejarla sin asegurar para no hacer ruido.\n";
    opcion = leerEleccion("Tu elección: ");
    cerroPuerta = (opcion == 1);

    pausar();

    // Final básico basado en decisiones
    cout << "\n=== Resultado ===\n";
    if (investigoSotano && cerroPuerta) {
        cout << "Lograste cerrar la puerta y aunque entraron , usaste la información del diario para sobrevivir.\n";
        cout << "¡Sobreviviste!\n";
    } else if (investigoSotano) {
        cout << "Aunque sabías lo que enfrentabas, no cerraste la puerta no tuviste tiempo para defenderte y las criaturas te atraparon.\n";
        cout << "Fin del juego.\n";
    } else if (cerroPuerta) {
        cout << "Cerraste la puerta, ganaste tiempo pero no sabias como enfrentarlos. No sobreviviste.\n";
        cout << "Fin del juego.\n";
    } else {
        cout << "No cerraste la puerta ni investigaste. Las criaturas te encontraron como una presa fácil.\n";
        cout << "Fin del juego.\n";
    }

    return 0;
}
