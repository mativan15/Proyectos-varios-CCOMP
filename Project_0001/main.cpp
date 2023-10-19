// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>

int main() 
{   

	std::system("cls");            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

    std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[31;5;88mUniversidad Catolica San Pablo \x1B[m" << std::endl; 
	std::cout << "\x1B[33;5;88mEscuela Profesional de Ciencia de la Computacion I\x1B[m" << std::endl; 
	std::cout << "Curso de Ciencia de la Computación I" << std::endl; 
	std::cout << "\x1B[38;5;46mAlumno: Ivan Matthias Sardon Medina \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46mEdad: 18 \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46mCodigo: 231-10-60261 \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46mCursos: 7 \x1B[m" << std::endl; 
	std::cout << "Arequipa 2023 - II" << std::endl; 
	std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	
	std::cout << "\x1B[m";             // Resetear color a valor por defecto 
	std::cout << "\nHello, World!! 2023 - Winter\n\n"; 
	
	int varEntero{1};
	bool varBooleano{true};
	char varCaracter{'i'};
	float varDecimal{1.154575};
	double varDoble{56.987123456789};
	
	std::cout << "varEntero = " << varEntero << std::endl;
	std::cout << "varBooleano = " << varBooleano << std::endl;
	std::cout << "varCaracter = " << varCaracter << std::endl;
	std::cout << "varDecimal = " << varDecimal << std::endl;
	std::cout << "varDoble = " << varDoble << std::endl;
		
	int a{7}, b{5}, c{1};
	c=a+b;
	std::cout <<"c = a + b => " << c << std::endl;
	c=a-b;
	std::cout <<"c = a - b => " << c << std::endl;
	c=a*b;
	std::cout <<"c = a * b => " << c << std::endl;
	c=a/b;
	std::cout <<"c = a / b => " << c << std::endl;
	c=a%b;
	std::cout <<"c = a % b => " << c << std::endl;
	
	return 0;
}
