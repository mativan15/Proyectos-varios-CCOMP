#include <iostream>
#include <cmath>


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
	std::cout << "\x1B[38;5;46mAlumno: Ivan Matthias Sardon Medina \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46mEdad: 18 \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46mCodigo: 231-10-60261 \x1B[m" << std::endl; 
	std::cout << "Arequipa 2023 - II" << std::endl; 
	std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";
	
	bool bucle{true}; 
	// tablero con variables
	int res{ };
	int num{ };
	int rep{ };
	do {
		bucle=false;
		bool primo{false};
		
		std::cout << "\nBienvenido\nIngrese un numero del 0 al 299:\n";
		std::cin >> num;
		if (num>=0 && num<=299){
			if (num%2==0){//par=p1
				std::cout << "\nEl numero " << num << " es multiplo de 2";
			} else{
				std::cout << "\nEl numero " << num << " no es multiplo de 2";
			}
			if (num%3==0){//par=p1
				std::cout << "\nEl numero " << num << " es multiplo de 3";
			} else{
				std::cout << "\nEl numero " << num << " no es multiplo de 3";
			}
			if (num%5==0){//par=p1
				std::cout << "\nEl numero " << num << " es multiplo de 5";
			} else{
				std::cout << "\nEl numero " << num << " no es multiplo de 5";
			}
			if (num%7==0){//par=p1
				std::cout << "\nEl numero " << num << " es multiplo de 7";
			} else{
				std::cout << "\nEl numero " << num << " no es multiplo de 7";
			}
			if (num%11==0){//par=p1
				std::cout << "\nEl numero " << num << " es multiplo de 11";
			} else{
				std::cout << "\nEl numero " << num << " no es multiplo de 11\n";
			}
			for (int i=2 ; i<num ; i++){
				res = num%i;
				//std::cout << res << "=" << num << "%" << i << "\n";
				if (res==0){
					primo=false;//std::cout << "\nEl numero" << num << " no es primo";
					break;
			
				} else{
					primo=true;
				}
			}
			if (primo==false){
				std::cout << "\nEl numero " << num << " no es primo";
			} else {
				std::cout << "\nEl numero " << num << " es primo";
			}
		} else {
			std::cout << "\nEl numero ingresado no es valido, intente de nuevo\n ";
			bucle=true;
			continue;
		}
		std::cout << "\n\nIngrese 1 para repetir, 0 para detener: \n"; 
		std::cin >> rep;
		if (rep==1){
			bucle=true;
		}else if (rep==0){
			bucle=false;
		} else {
			std::cout << "\nEl numero ingresado no es valido, intente de nuevo\n ";
			bucle=true;
			continue;
		}

	} while (bucle); 
	std::cout << "\nFin del programa";
	
	return 0;
}
