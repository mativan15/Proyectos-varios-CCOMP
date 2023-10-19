#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <windows.h> 
#include <cstdlib>
//#include "snake.h"
using namespace std;
bool bucle;
const int dim = 30;
int cab_x, cab_y, fruta_x, fruta_y, puntos, largo, dir, velocidad{};
int coordenadas_x[100], coordenadas_y[100];
void caratula(){
	string universidad = "Universidad Catolica San Pablo "; 
	string escuela = "Escuela Profesional de Ciencia de la Computacion I"; 
	string curso ="Curso de Ciencia de la Computacion I"; 
	string alumnos = "Alumnos: \nIvan Matthias Sardon Medina \nYan Cyran Arenas \nAnthony Huicho Perez \nChristian Quispe Lopez";
	string ciudad_año = "Arequipa 2023 - II";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
	system("cls"); 
	cout << "\x1B[H" << "\x1B[3;34m" << "//" << endl << "\x1B[m";
    cout << "\x1B[31;5;88m" << universidad<< "\x1B[m"<< "\n";
	cout << "\x1B[33;5;88m" << escuela << "\x1B[m"<< "\n";
	cout << curso << "\n";
	cout << "\x1B[38;5;46m" << alumnos<< "\x1B[m"<< "\n";
	cout << ciudad_año << "\n";
	cout << "\x1B[3;34m"<< "//" << endl << "\x1B[m";  
}
void fin (){
	cout << "\n\t Fin del Juego\n";
    Sleep(5000);
	bucle = false;
}
void dibujar_base(){
	for (int i = 0; i < dim + 2; i++){
        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 1<<4 | 1);
		cout << " |";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
	}
}



void inicializar(){
    bucle = true;
	velocidad = 500;
    dir = 1; // sin movimiento
    cab_x = 9;
    cab_y = 9;
    fruta_x = rand()%dim + 1;
    fruta_y = rand()%dim + 1;
    puntos = 0;
	largo = 2;
	coordenadas_x[0] = 9;
	coordenadas_y[0] = 10;
	coordenadas_x[1] = 9;
	coordenadas_y[1] = 11; //iniciar en 3 piezas
}

void print_tablero(){
    //system("cls");
    cout << "\x1B[38;5;46m" << "\n\t\t\tPUNTOS: " << puntos << "\x1B[m" << endl;
	dibujar_base();
    cout << endl;
    for (int i = 1; i <= dim; i++){
        for (int j = 1; j <= dim + 1; j++){
            if (j == 1 || j == dim + 1){
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 1<<4 | 1);
				cout << "| ";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
			}
            if (i == cab_y && j == cab_x){
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x0E<<4 | 6);
				cout << " O";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
            }
            else if (j == fruta_x && i == fruta_y){
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x0C<<4 | 4);
				cout << " @";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
				
            }
            else
            {
                bool imprimir = false;
                for (int k = 0; k < largo; k++){
                    if (coordenadas_x[k] == j && coordenadas_y[k] == i){
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x0E<<4 | 6);
						cout << " o";
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
                        imprimir = true;
                    }
                }
                if (!imprimir){cout << "  ";}
            }
        }
        cout << endl;
    }
    dibujar_base();
    cout << endl;
    
}

void recibir_tecla(){
    if (_kbhit()){
        switch (_getch()){
			case 72:
				dir = 1; // arriba
				break;
			case 80:
				dir = 2; // abajo
				break;
			case 75:
				dir = 3; // izquierd
				break;
			case 77:
				dir = 4; // derecha
				break;
			case 27:
				bucle = false; // escape salir
				break;
        }
    }
}

void mover_snake(){
    int med_x = coordenadas_x[0];
    int med_y = coordenadas_y[0];
    int med2_x, med2_y;
    coordenadas_x[0] = cab_x;
    coordenadas_y[0] = cab_y;
    for (int i = 1; i < largo; i++){
        med2_x = coordenadas_x[i];
        med2_y = coordenadas_y[i];
        coordenadas_x[i] = med_x;
        coordenadas_y[i] = med_y;
        med_x = med2_x;
        med_y = med2_y;
    }
    switch (dir){
		case 1: // arriba
			cab_y--;
			break;
		case 2: // abajo
			cab_y++;
			break;
		case 3: // izquie
			cab_x--;
			break;
		case 4: // derec
			cab_x++;
			break;
    }
    if ((cab_x > dim || cab_x < 1) || (cab_y > dim || cab_y < 1)){//choque con borde
        fin ();
    }
    for (int i = 0; i < largo; i++){
        if (coordenadas_x[i] == cab_x && coordenadas_y[i] == cab_y){//choque de cola
            fin ();
        }
    }
    if (cab_x == fruta_x && cab_y == fruta_y){
        puntos += 100;
        largo++;
        fruta_x = rand() % dim + 1;
        fruta_y = rand() % dim + 1;
		velocidad-=50;//fruta aumenta la velocidad
    }
}


void empezar_juego(){
	inicializar();
    while (bucle){
        caratula();
		print_tablero();
		Sleep(velocidad);
        recibir_tecla();
        mover_snake();
        
    }
    cout << fruta_x << " " << fruta_y;
    
}

void pantalla_start(){
    bool repite = true;
	int opcion;
	
	do {	
		system("cls");
		cout << "\x1B[38;5;46m" << "\n\t\t\tSNAKE" << "\x1B[m \n";
		cout << "\x1B[33;5;88m" << "\n\t1. JUGAR" << "\x1B[m"<< "\n";
		cout << "\x1B[33;5;88m" << "\n\t2. SALIR" << "\x1B[m"<< "\n";
		cout << "\x1B[38;5;46m" << "\n\tEscoger Opcion: " << "\x1B[m";
		cin >> opcion;
		if (std::cin.fail() || (opcion != 1 && opcion != 2)) { //comprabacion de erroes
			std::cout << "\nValor incorrecto!!! Ingrese 1 o 2:\n"; 
			std::cin.clear();           
			std::cin.ignore(100, '\n');
		} else {
			switch (opcion){
				case 1:
				   empezar_juego();
				   break;

				case 2:
				   repite = false;
				   break;			
			}
		}
	} while (repite);
	
}