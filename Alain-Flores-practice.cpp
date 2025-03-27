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
    while (opcion != 1 && opcion != 2 && opcion!=3) {
        cout << "Por favor, respeta y elige los numeros que te dan : ";
        cin >> opcion;
    }
    return opcion;
}

int main() {
    // Variables principales
    bool investigoSotano = false;
    bool cerroPuerta = false;
    bool hechizos = false;

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
    cout<<"3. seguir adelante y ver la sala principal."<<endl;
     int opcion = leerEleccion("Tu elección: ");
    if (opcion == 1) {
        investigoSotano = true;
        cout << "Encuentras un diario extraño con notas aterradoras.\n";
        cout<<"Donde habla sobre sus debilidades de las criaturas y sabes donde se encuentra la escopeta"<<endl;
    } else if(opcion==2) {
        cout << "Decides ignorar los ruidos y pasear por la cabaña.\n";
    } else if(opcion==3){
        hechizos=true;
        cout<<"pillaste un libro de hechizos parece tener informacion valiosa para los mounstros"<<endl;
    
    }
    pausar();

    // Segunda decisión
    cout << "Luego, empiezas a escuchar pasos afuera de la cabaña.\n";
    cout<<"¿Parecen ser ellos o son personas?"<<endl;
    cout << "1. Cerrar la puerta con llave.\n";
    cout << "2. Dejarla sin asegurar para no hacer ruido.\n";
    cout<<"3. Dejarla abierta porque si "<<endl;
    opcion = leerEleccion("Tu elección: ");
    if(opcion==2 or opcion==3){
        cerroPuerta=false;
    } else if (opcion==1){
     cerroPuerta=true;
    }

    pausar();
    
   
   // final de Hechizos 
    if(hechizos==1){ 
        cout<<"Gracias al libro que encontraste pudiste dejar una restriccion en la cabaña del tal forma que no pudieron entrar los mounstros"<<endl;
        cout<<"puedes vivir tranquilo, sobreviviste"<<endl;
        return 0;
    }
    // combates y luego sobrevivies
    if ( cerroPuerta!=1 and investigoSotano==1){
        int vidadelanimales=4;
        int cartuchos=4;
        cout<<"entraron las bestias apura y encuentra algo con que defenderte"<<endl;
        cout<<"esta enfrente tuyo las criaturas necesitas defenderte, toma la  escopeta de al lado y dales varios headshots"<<endl;
        cout<<"tienes que disparar para librarte de estas bestias"<<endl;
        cout<<"solo te queda disparar presiona el numero uno para hacerlo y solo tienes 4 cartuchos"<<endl;
        int opcion;
        cin>>opcion;
        if(opcion==1){
        for(cartuchos;cartuchos>0;--vidadelanimales)
         cartuchos= cartuchos-1;
         cout<<"te quedan "<<vidadelanimales<<" y "<<cartuchos<<" cartuchos"<<endl;
         if(vidadelanimales==0 ){
             cout<<"mataste a todos los mounstros gracias a que sabias su lugares debiles pero casi la palmas porque te hicieron daño"<<endl;
cout<<"sobreviviste pero con daños , Fin del juego"<<endl;
         }
    }
    }
    // combates y luego mueres
    if(cerroPuerta!=1 and investigoSotano!=1){
        int vidadelanimales=5;
        int cartuchos=4;
        cout<<"entraron las bestias apura y encuentra algo con que defenderte"<<endl;
        cout<<"esta enfrente tuyo las criaturas necesitas defenderte, toma la  escopeta de al lado y dales varios headshots"<<endl;
        cout<<"tienes que disparar para librarte de estas bestias"<<endl;
        cout<<"solo te queda disparar presiona el numero uno para hacerlo y solo tienes 4 cartuchos"<<endl;
        int opcion;
        cin>>opcion;
        if(opcion==1){
        for(cartuchos;cartuchos>0;--cartuchos)
         
         cout<<"te quedanron "<<cartuchos<<" cartuchos y "<<vidadelanimales<<" mounstro"<<endl;
         if(cartuchos==0){
             cout<<"Los disparos no le hicieron nada a las bestias, te quedaron " <<vidadelanimales<<" bestias te comieron " <<endl;
             
             cout<<"Aunque intentaste sobrevivir no fue lo suficiente para salir vivo"<<endl;
         }
        }
         
    }

    // Final básico basado en decisiones
    cout << "\n=== Resultado ===\n";
    if (investigoSotano && cerroPuerta) {
        cout << "Lograste cerrar la puerta y aunque entraron , usaste la información del diario y la escopeta   para sobrevivir.\n";
        cout << "¡Sobreviviste sin daños!\n";
    } else if (investigoSotano!=1 && cerroPuerta!=1) {
        cout << "Las balas no le hicieron daño y las criaturas te atraparon.\n";
        cout << "Fin del juego.\n";
    } else if (cerroPuerta) {
        cout << "Cerraste la puerta, ganaste tiempo pero no sabias como enfrentarlos . No sobreviviste.\n";
        cout << "Fin del juego.\n";
    } 

    return 0;
}
    