#include <iostream>
#include <cmath>
#include <cstdlib>
//IA:
int main() 
{   
	std::system("cls");            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo
    std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[31;5;88mUniversidad Catolica San Pablo \x1B[m" << std::endl; 
	std::cout << "\x1B[33;5;88mEscuela Profesional de Ciencia de la Computacion I\x1B[m" << std::endl; 
	std::cout << "Curso de Ciencia de la Computacion I" << std::endl; 
	std::cout << "\x1B[38;5;46mAlumnos: \nIvan Matthias Sardon Medina \nYan Cyran Arenas \nAnthony Huicho Perez \nChristian Quispe Lopez  \x1B[m" << std::endl;
	std::cout << "Arequipa 2023 - II" << std::endl; 
	std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	bool bucle{true}; 
	// tablero con variables
	do {
		//std::cout << "\n fin";//imprimir pantalla
		int tipo { };
		std::cout << "\nBienvenido\nIngrese numero de jugadores (1 o 2): ";
		
		bool val_3 {true};
		//std::cout << "\nEscoja el nivel de dificultad 1: Easy, 2:Medium o 3:Hard \n"; //escoger nivel
		while (val_3){//recibe el nivel
			
			std::cin >> tipo;
			if (std::cin.fail() || (tipo !=2 && tipo !=1)) { //comprabacion de erroes
					std::cout << "\nValor incorrecto!!! Ingrese 0 o 1: \n"; 
					std::cin.clear();           
					std::cin.ignore(100, '\n');
			} else {
					val_3 = false;
					break;
			}
		}
		
		
		char c1{' '},c2{' '},c3{' '},c4{' '},c5{' '},c6{' '},c7{' '},c8{' '},c9{' '};
		char simb{'X'};
		int nivel{ };
		bool diag{false};
		bool ran_pos{false};
		if (tipo==1){
			
			
			bool val_2 {true};
			std::cout << "\nEscoja el nivel de dificultad de la IA\n1: Easy, 2: Medium, 3: Hard \n"; //escoger nivel
			while (val_2){//recibe el nivel
				
				std::cin >> nivel;
				if (std::cin.fail() || (nivel >3 || nivel <1)) { //comprabacion de erroes
						std::cout << "\nValor incorrecto!!! Ingrese 1, 2 o 3: \n"; 
						std::cin.clear();           
						std::cin.ignore(100, '\n');
				} else {
						val_2 = false;
						break;
				}
			}
		}
		std::cout << "\nIngrese la posicion correspondiente en el teclado numerico:\n\n  7  |  8  |  9 ";//print tablero
		std::cout << "\n-----|-----|-----";
		std::cout << "\n  4  |  5  |  6 ";
		std::cout << "\n-----|-----|-----";
		std::cout << "\n  1  |  2  |  3 \n";
		std::cout << "\nInicio del juego:\n";
			
		for (int turno = 0; turno < 11; ++turno) {
			//std::cout << "\nturnooooo" << turno;
			
			
			//comprobacion si gano
			if (turno>4){
				if (c7 == simb && c8 == simb && c9 == simb){
						std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
						std::cout << "\n  " <<  "\x1B[96m" << c7 << "\x1B[0m" << "  |" << "  " << "\x1B[96m" << c8 << "\x1B[0m" << "  |" << "  " << "\x1B[96m" << c9 << "\x1B[0m" << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
						break;
					} else if (c4 == simb && c5 == simb && c6 == simb){
						std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
						std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " <<  "\x1B[96m" << c4 << "\x1B[0m" << "  |" << "  " << "\x1B[96m" << c5 << "\x1B[0m" << "  |" << "  " << "\x1B[96m" << c6 << "\x1B[0m" << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
						break;
					} else if (c1 == simb && c2 == simb && c3 == simb){
						std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
						std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " <<  "\x1B[96m" << c1 << "\x1B[0m" << "  |" << "  " << "\x1B[96m" << c2 << "\x1B[0m" << "  |" << "  " << "\x1B[96m" << c3 << "\x1B[0m" << " ";
						break;
					} else {
						if (c7 == simb && c4 == simb && c1 == simb){
							std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
							std::cout << "\n  " << "\x1B[96m" << c7 << "\x1B[0m" << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
							std::cout << "\n-----|-----|-----";
							std::cout << "\n  " << "\x1B[96m" << c4 << "\x1B[0m" << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
							std::cout << "\n-----|-----|-----";
							std::cout << "\n  " << "\x1B[96m" << c1 << "\x1B[0m" << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
							break;
						} else if (c8 == simb && c5 == simb && c2 == simb){
							std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
							std::cout << "\n  " << c7 << "  |" << "  " << "\x1B[96m" << c8 << "\x1B[0m" << "  |" << "  " << c9 << " ";
							std::cout << "\n-----|-----|-----";
							std::cout << "\n  " << c4 << "  |" << "  " << "\x1B[96m" << c5 << "\x1B[0m" << "  |" << "  " << c6 << " ";
							std::cout << "\n-----|-----|-----";
							std::cout << "\n  " << c1 << "  |" << "  " << "\x1B[96m" << c2 << "\x1B[0m" << "  |" << "  " << c3 << " ";
							break;
						} else if (c9 == simb && c6 == simb && c3 == simb){
							std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
							std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << "\x1B[96m" << c9 << "\x1B[0m" << " ";
							std::cout << "\n-----|-----|-----";
							std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << "\x1B[96m" << c6 << "\x1B[0m" << " ";
							std::cout << "\n-----|-----|-----";
							std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << "\x1B[96m" << c3 << "\x1B[0m" << " ";
							break;
						}
					}
					if (c7==simb && c5==simb && c3==simb){
						std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
						std::cout << "\n  " << "\x1B[96m" << c7 << "\x1B[0m" << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c4 << "  |" << "  " << "\x1B[96m" << c5 << "\x1B[0m" << "  |" << "  " << c6 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << "\x1B[96m" << c3 << "\x1B[0m" << " ";
						break;
					} else if (c9==simb && c5==simb && c1==simb){
						std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
						std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << "\x1B[96m" << c9 << "\x1B[0m" << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c4 << "  |" << "  " << "\x1B[96m" << c5 << "\x1B[0m" << "  |" << "  " << c6 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << "\x1B[96m" << c1 << "\x1B[0m" << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
						break;
					} else if (c1!=' ' && c2!=' ' && c3!=' ' && c4!=' ' && c5!=' ' && c6!=' ' && c7!=' ' && c8!=' ' && c9!=' '){
						std::cout << "\n\nEmpate!!!\n";
						std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
						std::cout << "\n-----|-----|-----";
						std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
						break;
					}
			}
			
				
			//asignacion de turnoo
			if (nivel == 3 && turno == 0){
				++turno;
			}
			if (turno%2 == 1){//par=p1
				simb='X';
			} else{
				
				simb='O';
				
			}
			int pos{ };
			int ia{ };
			
			
			if (tipo==1 && simb=='X' ){//turno IA
				//std::cout << "\nturno IA:\n" << turno;
				
				switch (nivel){
					case 1://nivel facil
						//std::cout << "\nfacil:\n";
						pos = rand()%9+1;
						switch (pos){

							case 7:
								if (c7==' '){
									c7=simb;
									//std::cout << "\nCasilla llenada" << c7;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 8:
								//fila1[2]=simb;
								if (c8==' '){
									c8=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 9:
								//fila1[3]=simb;
								if (c9==' '){
									c9=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 4:
								//fila2[1]=simb;
								if (c4==' '){
									c4=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 5:
								//fila2[2]=simb;
								if (c5==' '){
									c5=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 6:
								//fila2[3]=simb;
								if (c6==' '){
									c6=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 1:
								//fila3[1]=simb;
								if (c1==' '){
									c1=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 2:
								//fila3[2]=simb;
								if (c2==' '){
									c2=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 3:
								//fila3[3]=simb;
								if (c3==' '){
									c3=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
						}
						break;
					case 2://nivel medio
						//std::cout << "\nmedio:\n";
						pos = rand()%9+1;
						// comprobar si puede ganar
						//std::cout << "\nganar";
						if (((c9 == 'X' && c8 == 'X') || (c3 == 'X' && c5 == 'X') || (c1 == 'X' && c4 == 'X')) && c7 == ' ') {
							c7 = simb;
							break;
						} else if (((c7 == 'X' && c9 == 'X') || (c2 == 'X' && c5 == 'X')) && c8 == ' ') {
							c8 = simb;
							break;
						} else if (((c7 == 'X' && c8 == 'X') || (c1 == 'X' && c5 == 'X') || (c3 == 'X' && c6 == 'X')) && c9 == ' ') {
							c9 = simb;
							break;
						} else if (((c5 == 'X' && c6 == 'X') || (c1 == 'X' && c7 == 'X')) && c4 == ' ') {
							c4 = simb;
							break;
						} else if (((c7 == 'X' && c3 == 'X') || (c8 == 'X' && c2 == 'X') || (c9 == 'X' && c1 == 'X') || (c6 == 'X' && c4 == 'X')) && c5 == ' ') {
							c5 = simb;
							break;
						} else if (((c9 == 'X' && c3 == 'X') || (c4 == 'X' && c5 == 'X')) && c6 == ' ') {
							c6 = simb;
							break;
						} else if (((c7 == 'X' && c4 == 'X') || (c9 == 'X' && c5 == 'X') || (c3 == 'X' && c2 == 'X')) && c1 == ' ') {
							c1 = simb;
							break;
						} else if (((c5 == 'X' && c8 == 'X') || (c1 == 'X' && c3 == 'X')) && c2 == ' ') {
							c2 = simb;
							break;
						} else if (((c7 == 'X' && c5 == 'X') || (c1 == 'X' && c2 == 'X') || (c9 == 'X' && c6 == 'X')) && c3 == ' ') {
							c3 = simb;
							break;
						
						
								// comprobar si puede bloquear
						} else if (((c9 == c8 && c9 != ' ') || (c3 == c5 && c3 != ' ') || (c1 == c4 && c1 != ' ')) && c7 == ' '){ //poner condicion para evitar casilla repetida
								c7 = simb;
								//std::cout << "\n7:\n";
								break;
						} else if (((c7 == c9 && c9 != ' ') || (c2 == c5 && c2 != ' ')) && c8 == ' '){
								c8 = simb;
								//std::cout << "\n8:\n";
								break;
						} else if (((c7 == c8 && c8 != ' ') || (c1 == c5 && c1 != ' ') || (c3 == c6 && c3 != ' ')) && c9 == ' '){
								c9 = simb;
								//std::cout << "\n9:\n";
								break;
						} else if (((c5 == c6 && c5 != ' ') || (c1 == c7 && c1 != ' ')) && c4 == ' '){
								c4 = simb;
								//std::cout << "\n4:\n";
								break;
						} else if (((c7 ==c3 && c7 != ' ') || (c8 == c2 && c8 != ' ') || (c9 == c1 && c9 != ' ') || (c6 == c4 && c4 != ' ')) && c5 == ' '){
								c5 = simb;
								//std::cout << "\n5:\n";
								break;
						} else if (((c9 == c3 && c9 != ' ') || (c4 == c5 && c5 != ' ')) && c6 == ' '){
								c6 = simb;
								//std::cout << "\n6:\n";
								break;
						} else if (((c7 == c4 && c7 != ' ') || (c9 == c5 && c9 != ' ') || (c3 == c2 && c3 != ' ')) && c1 == ' '){
								c1 = simb;
								//std::cout << "\n1:\n";
								break;
						} else if (((c5 == c8 && c5 != ' ') || (c1 == c3 && c1 != ' ')) && c2 == ' '){
								c2 = simb;
								//std::cout << "\n2:\n";
								break;
						} else if (((c7 == c5 && c7 != ' ') || (c1 == c2 && c2 != ' ') || (c9 == c6 && c9 != ' ')) && c3 == ' '){
								c3 = simb;
								//std::cout << "\n3:\n";
								break;
						} else {
							//std::cout << "\nnada para bloquear,random:\n";
							switch (pos){

							case 7:
								if (c7==' '){
									c7=simb;
									//std::cout << "\nCasilla llenada" << c7;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 8:
								//fila1[2]=simb;
								if (c8==' '){
									c8=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 9:
								//fila1[3]=simb;
								if (c9==' '){
									c9=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 4:
								//fila2[1]=simb;
								if (c4==' '){
									c4=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 5:
								//fila2[2]=simb;
								if (c5==' '){
									c5=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 6:
								//fila2[3]=simb;
								if (c6==' '){
									c6=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 1:
								//fila3[1]=simb;
								if (c1==' '){
									c1=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 2:
								//fila3[2]=simb;
								if (c2==' '){
									c2=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							case 3:
								//fila3[3]=simb;
								if (c3==' '){
									c3=simb;
								} else{
									//std::cout << "\nCasilla llena!!! Intente de nuevo\n";
									--turno;
								}
								break;
							}
						}
						break;
					case 3://nivel d
						//std::cout << "\ndificil:\n";
						// comprobar si puede ganar
						ia = rand()%7+1;
						
						if (turno==1){
							switch (ia){
								case 1:
								c5 = simb;
								//std::cout << "\ncentroo:\n";
								diag = true;
								break;
								case 2:
								c7 = simb;
								//std::cout << "\nesquina:\n";
								break;
								case 3:
								c9 = simb;
								//std::cout << "\nesquina:\n";
								break;
								case 4:
								c1 = simb;
								//std::cout << "\nesquina:\n";
								break;
								case 5:
								c3 = simb;
								//std::cout << "\nesquina:\n";
								break;
								case 6:
								c5 = simb;
								//std::cout << "\ncentroo:\n";
								diag = true;
								break;
								case 7:
								c5 = simb;
								//std::cout << "\ncentroo:\n";
								diag = true;
								break;
							}
						} else if (turno==3){
							if (c5 == ' '){
								c5 = simb;
								//std::cout << "\ncentroo2:\n";
								diag = true;
								break;
							} else if (c7 == ' ' && c3 == 'O'){
								c7 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							} else if (c9 == ' ' && c1 == 'O'){
								c9 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							} else if (c1 == ' ' && c9 == 'O'){
								c1 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							} else if (c3 == ' ' && c7 == 'O'){
								c3 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							} else if (c7 == ' '){
								c7 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							} else if (c9 == ' '){
								c9 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							} else if (c1 == ' '){
								c1 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							} else if (c3 == ' '){
								c3 = simb;
								//std::cout << "\nesquina2:\n";
								break;
							}
						} else {
							
							//std::cout << diag <<"\nganar";
							if (((c9 == 'X' && c8 == 'X') || (c3 == 'X' && c5 == 'X') || (c1 == 'X' && c4 == 'X')) && c7 == ' ') {
								c7 = simb;
								break;
							} else if (((c7 == 'X' && c9 == 'X') || (c2 == 'X' && c5 == 'X')) && c8 == ' ') {
								c8 = simb;
								break;
							} else if (((c7 == 'X' && c8 == 'X') || (c1 == 'X' && c5 == 'X') || (c3 == 'X' && c6 == 'X')) && c9 == ' ') {
								c9 = simb;
								break;
							} else if (((c5 == 'X' && c6 == 'X') || (c1 == 'X' && c7 == 'X')) && c4 == ' ') {
								c4 = simb;
								break;
							} else if (((c7 == 'X' && c3 == 'X') || (c8 == 'X' && c2 == 'X') || (c9 == 'X' && c1 == 'X') || (c6 == 'X' && c4 == 'X')) && c5 == ' ') {
								c5 = simb;
								break;
							} else if (((c9 == 'X' && c3 == 'X') || (c4 == 'X' && c5 == 'X')) && c6 == ' ') {
								c6 = simb;
								break;
							} else if (((c7 == 'X' && c4 == 'X') || (c9 == 'X' && c5 == 'X') || (c3 == 'X' && c2 == 'X')) && c1 == ' ') {
								c1 = simb;
								break;
							} else if (((c5 == 'X' && c8 == 'X') || (c1 == 'X' && c3 == 'X')) && c2 == ' ') {
								c2 = simb;
								break;
							} else if (((c7 == 'X' && c5 == 'X') || (c1 == 'X' && c2 == 'X') || (c9 == 'X' && c6 == 'X')) && c3 == ' ') {
								c3 = simb;
								break;
							
							
									// comprobar si puede bloquear
							} else if (((c9 == c8 && c9 != ' ') || (c3 == c5 && c3 != ' ') || (c1 == c4 && c1 != ' ')) && c7 == ' '){ //poner condicion para evitar casilla repetida
									c7 = simb;
									//std::cout << "\n7:\n";
									break;
							} else if (((c7 == c9 && c9 != ' ') || (c2 == c5 && c2 != ' ')) && c8 == ' '){
									c8 = simb;
									//std::cout << "\n8:\n";
									break;
							} else if (((c7 == c8 && c8 != ' ') || (c1 == c5 && c1 != ' ') || (c3 == c6 && c3 != ' ')) && c9 == ' '){
									c9 = simb;
									//std::cout << "\n9:\n";
									break;
							} else if (((c5 == c6 && c5 != ' ') || (c1 == c7 && c1 != ' ')) && c4 == ' '){
									c4 = simb;
									//std::cout << "\n4:\n";
									break;
							} else if (((c7 ==c3 && c7 != ' ') || (c8 == c2 && c8 != ' ') || (c9 == c1 && c9 != ' ') || (c6 == c4 && c4 != ' ')) && c5 == ' '){
									c5 = simb;
									//std::cout << "\n5:\n";
									break;
							} else if (((c9 == c3 && c9 != ' ') || (c4 == c5 && c5 != ' ')) && c6 == ' '){
									c6 = simb;
									//std::cout << "\n6:\n";
									break;
							} else if (((c7 == c4 && c7 != ' ') || (c9 == c5 && c9 != ' ') || (c3 == c2 && c3 != ' ')) && c1 == ' '){
									c1 = simb;
									//std::cout << "\n1:\n";
									break;
							} else if (((c5 == c8 && c5 != ' ') || (c1 == c3 && c1 != ' ')) && c2 == ' '){
									c2 = simb;
									//std::cout << "\n2:\n";
									break;
							} else if (((c7 == c5 && c7 != ' ') || (c1 == c2 && c2 != ' ') || (c9 == c6 && c9 != ' ')) && c3 == ' '){
									c3 = simb;
									//std::cout << "\n3:\n";
									break;
									//funciones avanzadas xd
							} else {
								//std::cout << "\navanzado\n";
								//if (diag==true){
									if (c8 == ' ' && c2 == ' '){
										c8 = simb;
										//std::cout << "\nborde3-8:\n";
										break;
									} else if (c4 == ' ' && c6 == ' '){
										c4 = simb;
										//std::cout << "\nborde3-4:\n";
										break;
									} else {
										if (c3 == ' '){
											c3 = simb;
											//std::cout << "\nesquina_f:\n";
											diag = true;
											break;
										} else if (c7 == ' '){
											c7 = simb;
											//std::cout << "\nesquina_f:\n";
											break;
										} else if (c9 == ' '){
											c9 = simb;
											//std::cout << "\nesquina_f:\n";
											break;
										} else if (c1 == ' '){
											c1 = simb;
											//std::cout << "\nesquina_f:\n";
											break;
										} else {std::cout << "\nvacio_f:\n";}
									}/*else if (c1 == ' ' && c9 == ' '){
										c1 = simb;
										std::cout << "\nesquina2:\n";
										break;
									} else if (c3 == ' ' && c7 == ' '){
										c3 = simb;
										std::cout << "\nesquina2:\n";
										break;
									}*/
								//} else {
									//std::cout << "\nvacio\n";
									//break;
							}
							/*if (c5 == ' '){
								c5 = simb;
								std::cout << "\ncentroo:\n";;
							} else if (c7 == ' '){
								c7 = simb;
								std::cout << "\nesquina:\n";;
							} else if (c9 == ' '){
								c9 = simb;
								std::cout << "\nesquina:\n";;
							} else if (c1 == ' '){
								c1 = simb;
								std::cout << "\nesquina:\n";;
							} else if (c3 == ' '){
								c3 = simb;
								std::cout << "\nesquina:\n";;
							
							} else if (c1 == ' '){
								c1 = simb;
								std::cout << "\nesquina:\n";;
							} else if (c1 == ' '){
								c1 = simb;
								std::cout << "\nesquina:\n";;
							}*/
							
						}
				}
			
			} else {//turno jugador
				std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
				std::cout << "\n-----|-----|-----";
				std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
				std::cout << "\n-----|-----|-----";
				std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
				std::cout << "\n\nTurno de " << simb << "\nIngrese posicion (1-9): "; 
				bool val_1 {true};
				while (val_1){
				
					std::cin >> pos;
					if (std::cin.fail() || (pos >9 || pos <1)) { //comprabacion de erroes
						std::cout << "\n\nTurno " << simb << "\nValor incorrecto!!! Ingrese posicion valida (1-9): \n"; 
						std::cin.clear();           
						std::cin.ignore(100, '\n');
					} else {
						val_1 = false;
						break;
					}
				}
				
				switch (pos){
						case 7:
							if (c7==' '){
								c7=simb;
								//std::cout << "\nCasilla llenada" << c7;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 8:
							//fila1[2]=simb;
							if (c8==' '){
								c8=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 9:
							//fila1[3]=simb;
							if (c9==' '){
								c9=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 4:
							//fila2[1]=simb;
							if (c4==' '){
								c4=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 5:
							//fila2[2]=simb;
							if (c5==' '){
								c5=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 6:
							//fila2[3]=simb;
							if (c6==' '){
								c6=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 1:
							//fila3[1]=simb;
							if (c1==' '){
								c1=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 2:
							//fila3[2]=simb;
							if (c2==' '){
								c2=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
						case 3:
							//fila3[3]=simb;
							if (c3==' '){
								c3=simb;
							} else{
								std::cout << "\nCasilla llena!!! Intente de nuevo\n";
								--turno;
							}
							break;
					}
				//if (turno%2==1 && tipo==1){
					/*std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
					std::cout << "\n-----|-----|-----";
					std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
					std::cout << "\n-----|-----|-----";
					std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";*/
			}
			
		}
			/*if (turno%2==1 && tipo==1){
				std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
				std::cout << "\n-----|-----|-----";
				std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
				std::cout << "\n-----|-----|-----";
				std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
			}*/
	//}
		//print tablero
			
		std::cout << "\n\nIngrese 1 para jugar de nuevo, 0 para detener: \n"; 
		bool val_1 {true};
		//val_1 =true;
		int int_bucle { };
		while (val_1){
			
			std::cin >> int_bucle;
			if (std::cin.fail() || (int_bucle !=0 && int_bucle !=1)) { //comprabacion de erroes
				std::cout << "\nValor incorrecto!!! Ingrese 1 para jugar de nuevo, 0 para detener: \n"; 
				std::cin.clear();           
				std::cin.ignore(100, '\n');
			} else {
				val_1 = false;
				if (int_bucle==1){
					bucle = true;
				} else {
					bucle = false;
				break;
				}
			}
		}
		//std::cin >> bucle;
		 
	} while (bucle); 
		std::cout << "\nFin del programa";
	return 0;
}