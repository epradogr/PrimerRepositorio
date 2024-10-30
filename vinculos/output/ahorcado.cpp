//Bibliotecas
#include <iostream>
#include <string>
using namespace std;

//Variables globales
const int intmax = 6;
const string palabra = "sistemas";

int main() {
    
    string letras(palabra.length(), '_'); //Crea una cadena con la longitud de la palabra, por cada letra se imprime un espacio
    int intentos = 0; // Contador de intentos

    while (intentos < intmax) {
        // Se muestra la palabra con las letras adivinadas
        cout << "Palabra: " << letras << endl;

        // Aqui se pide una letra al jugador
        cout << "Ingresa una letra: ";
        char letra;
        cin >> letra;

        // Se verifica si la letra está en la palabra con una variable bool, es decir, verdadero o falso
        bool encontrada = false;
        for (int i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                letras[i] = letra; // Actualiza la letra adivinada
                encontrada = true;
            }
        }

        // Si la letra no está en la palabra se resta un intento
        if (!encontrada) {
            intentos++;
            cout << "Intentos restantes: " << intmax - intentos << endl;
        }

        // Verificar si el jugador ha ganado con una bandera
        if (letras == palabra) {
            cout << "Felicidades! Adivinaste. La palabra es: " << palabra << endl;
            return 0; // Termina el juego
        }
    }

    // Si el jugador se queda sin intentos, mostrar la palabra secreta
    cout << "Perdiste. La palabra secreta era: " << palabra << endl;
    return 0;
}

