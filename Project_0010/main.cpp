#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <windows.h> 
#include <cstdlib>

using namespace std;
const int dim{10};
void caratula(){
	string universidad = "Universidad Catolica San Pablo "; 
	string escuela = "Escuela Profesional de Ciencia de la Computacion I"; 
	string curso ="Curso de Ciencia de la Computacion I"; 
	string alumnos = "Alumnos: \nIvan Matthias Sardon Medina \nYan Cyran Arenas \nAnthony Huicho Perez \nChristian Quispe Lopez";
	string ciudad_año = "Arequipa 2023 - II";
	system("cls");            // Comando para borrar todo el contenido de la pantalla
	cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquier//
    cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	cout << "/*/" << std::endl; 
	cout << "\x1B[m";             // Resetear color a valor por defecto
    cout << "\x1B[31;5;88m" << universidad<< "\x1B[m"<< "\n";
	cout << "\x1B[33;5;88m" << escuela << "\x1B[m"<< "\n";
	cout << curso << "\n";
	cout << "\x1B[38;5;46m" << alumnos<< "\x1B[m"<< "\n";
	cout << ciudad_año << "\n";
	cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	cout << "/*/" << std::endl;
	cout << "\x1B[m";             // Resetear color a valor por defecto 
}
void menu_principal();
void Empezar_Juego();
bool snake_autochoque(int coordenadas_x[], int coordenadas_y[],int cab_x, int cab_y, int largo);
bool choque_bordes(int coordenadas_x[], int coordenadas_y[],int cab_x, int cab_y);
void print_tablero(char tablero[dim][dim], int cab_x, int cab_y, int col_x, int col_y);
void mover_snake(char tablero[dim][dim], int coordenadas_x[], int coordenadas_y[], int &largo, bool &comida);

int main() {
	
	menu_principal();
	

    return 0;
}

void menu_principal()
{
	bool repite = true;
	int opcion;
	
	do {	
		
		system("cls");
		
		cout << "\x1B[38;5;46m" << "\n\t\t\tSNAKE" << "\x1B[m \n";
		
		cout << "\x1B[33;5;88m" << "\n\t1. JUGAR" << "\x1B[m"<< "\n";
		cout << "\x1B[33;5;88m" << "\n\t2. SALIR" << "\x1B[m"<< "\n";
		
		cout << "\x1B[38;5;46m" << "\n\tEscoger Opcion: " << "\x1B[m";
		cin >> opcion;
		
		
		switch (opcion){
			case 1:
			   Empezar_Juego();
			   break;

            case 2:
			   repite = false;
               break;			
		}
		
	} while (repite);
		
	
}

void Empezar_Juego(){
	
	
	int cab_x,cab_y, fruta_x, fruta_y, col_x, col_y{};
	cab_x = 2;
	cab_y = 4;
	fruta_x = 6;
	fruta_y = 9;
	col_x = cab_x+2;
	col_y =cab_y;
    char tablero[dim][dim] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    };
	int coordenadas_x[100] = {cab_x,cab_x+1, cab_x+2};
	int coordenadas_y[100] = {cab_y,cab_y, cab_y};
    int fps = 1000 / 30; //velocidad de 15 fps
	//bool bucle{false};
	int largo{3};
	bool comida{false};
	int puntos{};
	//int temp = coordenadas_x[1];
	do {
		coordenadas_x[0] = cab_x;
		coordenadas_y[0] = cab_y;
		//system("cls");
		caratula();	
		//agregar al tablero la serpiente y la fruta:
		for (int i = 0; i < largo; i++) {
			//cout << "\n" << coordenadas_x[i]  << " - "<< coordenadas_y[i]<< "\n";
			tablero[fruta_x][fruta_y] = '@';
			if (i==0){
				tablero[coordenadas_x[i]][coordenadas_y[i]] = 'O';
			} else {
				tablero[coordenadas_x[i]][coordenadas_y[i]] = '#';
			}
		}
		
		
		print_tablero(tablero, cab_x, cab_y, col_x, col_y);
		//
		if (coordenadas_x[0]==fruta_x && coordenadas_y[0]==fruta_y){
			comida=true;
			
			fruta_x=rand()%10;
			fruta_y=rand()%10;
		}
        char tecla = _getch();
        if (tecla == 72) { // arriba
            if (coordenadas_x[0] <= 0) {tecla=27;
			} else {
				mover_snake(tablero, coordenadas_x, coordenadas_y, largo, comida);
				cab_x--;
			}
        } else if (tecla == 80) { // abajo
			if (coordenadas_x[0] >= dim - 1) {tecla=27;
			} else {
				mover_snake(tablero, coordenadas_x, coordenadas_y, largo, comida);
				cab_x++;
			}
			//col_x++;
			//bucle=true;
        } else if (tecla == 75) { // izquierda
            if (coordenadas_y[0] <= 0) {tecla=27;
			} else {
			mover_snake(tablero, coordenadas_x, coordenadas_y, largo, comida);	
			cab_y--;
			}
			//col_y--;
			//bucle=true;
        } else if (tecla == 77) { //derecha
            if (coordenadas_y[0] >= dim - 1) {tecla=27;
			} else {
			mover_snake(tablero, coordenadas_x, coordenadas_y, largo, comida);
			cab_y++;
			}
			//col_y++;
			//bucle=true;
        } 
		if (tecla == 27 || choque_bordes(coordenadas_x, coordenadas_y,cab_x,cab_y) || snake_autochoque( coordenadas_x, coordenadas_y, cab_x, cab_y, largo)) { //detener bucle
            cout <<"\nChocaste, Game Over\n";
			system("pause>nul");
			break;
        }
		//comida=false;
        //cout << "\n\ncab" << coordenadas_x[0] << coordenadas_y[0] << "\ncomida?"<< comida;
		//cout << "ult" << col_x << col_y;
		//Sleep(fps);
    } while (true);
	
}

bool choque_bordes(int coordenadas_x[], int coordenadas_y[],int cab_x, int cab_y){
    return (coordenadas_x[0]>9 || coordenadas_x[0]>9	 || coordenadas_x[0]<0 || coordenadas_x[0]<0);
}
void print_tablero(char tablero[dim][dim], int cab_x, int cab_y, int col_x, int col_y) {
    cout << "\n .---.---.---.---.---.---.---.---.---.---.";
	for (int i = 0; i < dim; ++i) {
        cout << "\n | ";
        for (int j = 0; j < dim; ++j) {
            
			if(tablero[i][j] == 'O'){
				cout << "\x1B[34m" <<tablero[i][j] << "\x1B[m" << " | ";
			}else if(tablero[i][j] == '#'){
				cout << "\x1B[36m" <<tablero[i][j] << "\x1B[m" << " | ";
			}else if(tablero[i][j] == '@'){
				cout << "\x1B[31m" <<tablero[i][j] << "\x1B[m" << " | ";
			}else{
				cout << tablero[i][j] << " | ";
			}
        }
        if (i!=dim-1){
			cout << "\n |---|---|---|---|---|---|---|---|---|---|";
		} else {
			cout << "\n '---'---'---'---'---'---'---'---'---'---'";}
    }
}
void mover_snake(char tablero[dim][dim], int coordenadas_x[], int coordenadas_y[], int &largo, bool &comida) {
    for (int i = largo - 1; i > 0; i--) {
        if (comida){
			largo++;
			//cout << "\ncomida-> largo" <<largo; 
			coordenadas_x[i+1] = coordenadas_x[i];
			coordenadas_y[i+1] = coordenadas_y[i];
			comida=false;
		} else {
			tablero[coordenadas_x[i]][coordenadas_y[i]] = ' ';
		}
		
        coordenadas_x[i] = coordenadas_x[i - 1];
        coordenadas_y[i] = coordenadas_y[i - 1];
    }
    // Optionally, you can update the head of the snake here.
    //coordenadas_x[0] = cab_x;
    //coordenadas_y[0] = cab_y;
}

bool snake_autochoque(int coordenadas_x[], int coordenadas_y[],int cab_x, int cab_y, int largo){
    for(int i =1; i< largo ; i++){
		if (cab_x== coordenadas_x[i] && cab_y== coordenadas_y[i]){
			return true;
		}
		
	}
	return false;
}