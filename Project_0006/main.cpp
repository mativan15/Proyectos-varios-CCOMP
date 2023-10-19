#include <iostream>
#include <cmath>

int main() 
{   
	std::system("cls");            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

    std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/*********************x******************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[31;5;88mUniversidad Catolica San Pablo \x1B[m" << std::endl; 
	std::cout << "\x1B[33;5;88mEscuela Profesional de Ciencia de la Computacion I\x1B[m" << std::endl; 
	std::cout << "Curso de Ciencia de la Computacion I" << std::endl; 
	std::cout << "\x1B[38;5;46mAlumnos: \nYan Cyran Arenas \nAnthony Huicho Perez \nChristian Quispe Lopez \nIvan Matthias Sardon Medina \x1B[m" << std::endl;
	std::cout << "Arequipa 2023 - II" << std::endl; 
	std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	bool bucle{true}; 
	// tablero con variables
	do {
		//std::cout << "\n fin";//imprimir pantalla
		std::cout << "\nBienvenido\nIngrese la posicion correspondiente en el teclado numerico:\n\n  7  |  8  |  9 ";
		std::cout << "\n-----|-----|-----";
		std::cout << "\n  4  |  5  |  6 ";
		std::cout << "\n-----|-----|-----";
		std::cout << "\n  1  |  2  |  3 \n\nInicio del juego:\n";
		
		char c1{' '},c2{' '},c3{' '},c4{' '},c5{' '},c6{' '},c7{' '},c8{' '},c9{' '};
		char simb{'X'};
		for (int turno = 0; turno < 10; ++turno) {
			//std::cout << "\nturnooooo" << turno;
			
			//print tablero
			std::cout << "\n  " << c7 << "  |" << "  " << c8 << "  |" << "  " << c9 << " ";
			std::cout << "\n-----|-----|-----";
			std::cout << "\n  " << c4 << "  |" << "  " << c5 << "  |" << "  " << c6 << " ";
			std::cout << "\n-----|-----|-----";
			std::cout << "\n  " << c1 << "  |" << "  " << c2 << "  |" << "  " << c3 << " ";
			
			//comprobacion si gano
			if (c7 == simb && c8 == simb && c9 == simb){
				std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
				break;
			} else if (c4 == simb && c5 == simb && c6 == simb){
				std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
				break;
			} else if (c1 == simb && c2 == simb && c3 == simb){
				std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
				break;
			} else {
				if (c7 == simb && c4 == simb && c1 == simb){
					std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
					break;
				} else if (c8 == simb && c5 == simb && c2 == simb){
					std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
					break;
				} else if (c9 == simb && c6 == simb && c3 == simb){
					std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
					break;
				}
			}
			if (c7==simb && c5==simb && c3==simb){
				std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
				break;
			} else if (c9==simb && c5==simb && c1==simb){
				std::cout << "\nHa ganado el jugador " << simb << "!!!\n";
				break;
			} else if (c1!=' ' && c2!=' ' && c3!=' ' && c4!=' ' && c5!=' ' && c6!=' ' && c7!=' ' && c8!=' ' && c9!=' '){
				std::cout << "\n\nEmpate!!!\n";
				break;
			}
				
			
				
			//asignacion de turnoo
			if (turno%2==1){//par=p1
				simb='X';
			} else{
				simb='O';
			}
			int pos{ };
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
			
		}

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