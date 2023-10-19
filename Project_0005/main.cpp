// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>
#include <cmath>

int main() 
{   

	std::system("cls");            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

    std::cout << "\x1B[37;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[35;5;88mUniversidad Catolica San Pablo \x1B[m" << std::endl; 
	std::cout << "\x1B[35;5;88mEscuela Profesional de Ciencia de la Computacion I\x1B[m" << std::endl; 
	std::cout << "\x1B[35;5;88mCurso de Ciencia de la Computacion I" << std::endl; 
	std::cout << "\x1B[35;5;88mAlumno - Yan Cyran Arenas \x1B[m" << std::endl; 
	std::cout << "\x1B[35;5;88mArequipa 2023 - Semestre II" << std::endl; 
	std::cout << "\x1B[37;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	
	std::cout << "\x1B[m";             // Resetear color a valor por defecto 
	std::cout << "\nHello, World!! 2023 - Winter\n\n"; 
	
	
	
	
	
	
	
	

    std::cout << "Ejercicio 1: ECUACION DE LA RECTA\n" << std::endl;

    
		int x1{ };
		int x2{ };
	    int y1{ };
	    int y2{ };
		
	    std::cout << "Ingresar x1: "; 
	    std::cin >> x1;
		while(x1 == 0)
		{
			std::cout << "Valor invalido, ingrese otro valor para x1: "; 
		    std::cin >> x1;
		}
		
		std::cout << "Ingrese x2: ";         
        std::cin >> x2;
	    while( x2 == 0 || x1 == x2 )
		{
			std::cout << "Valor invalido, ingrese otro valor para x2: "; 
		    std::cin >> x2;
	    }
		
	    std::cout << "Ingrese y1: ";         
        std::cin >> y1; 
		
		std::cout << "Ingrese y2: "; 
        std::cin >> y2;
		
		
			
		
		float m{ }; 
	    m=(y2-y1)/(x2-x1);
	    float b{ }; 
	    b=y1-(m*x1);
	
	    std::cout << "\nLa ecuacion es: y = " << m << 'x'<< "+ " << b << "\n\n\n" << std::endl;
	
	
	
	
	
    
	
	
	
	
	
	std::cout << "Ejercicio 2.2: ECUACION CUADRATICA FORMULA GENERAL\n" << std::endl;
	int X{ }; 
	int Y{ }; 
	int Z{ }; 
	
	std::cout << "Ingrese X: ";    
    std::cin >> X;
	while(X == 0)
	{
		std::cout << "Valor invalido, X debe ser diferente de 0: ";    
		std::cin >> X;
	}
	
	std::cout << "Ingrese Y: ";    
    std::cin >> Y;
	
	std::cout << "Ingrese Z: "; 
    std::cin >> Z; 
	
	float r1{ };
	r1 = (-Y + sqrt((Y*Y)-(4*X*Z)))/(2*X);
	std::cout << "r1 = " << r1 << std::endl;
	
	float r2{ };
	r2 = (-Y - sqrt((Y*Y)-(4*X*Z)))/(2*X);
	std::cout << "r2 = " << r2 << std::endl;
	
	
	
	
	
	
	
	
	std::cout << "Ejercicio 2.2: ECUACION CUADRATICA PO-SHEN LOH\n" << std::endl;
	
	int A{ }; 
	int B{ }; 
	int C{ }; 

	
	std::cout << "Ingrese A: ";    
    std::cin >> A;
	while(A == 0)
	{
		std::cout << "Valor invalido, A debe ser diferente de 0: ";    
		std::cin >> A;
	}
	
	std::cout << "Ingrese B: ";    
    std::cin >> B;
	
	std::cout << "Ingrese C: "; 
    std::cin >> C; 
	
	float A1{ }; 
	float B1{ }; 
	float C1{ }; 
	
	A1 = A/A;
	//std::cout << A1; 
	
	B1 = B/A;
	//std::cout << B1; 
	
	C1 = C/A;
	//std::cout << C1; 
	
	
	
	
	float M{ }; 
	M = (B1/2.0)*(-1);
	
	std::cout<<"\nM = " << M << std::endl;
	
	
	float u{ };
	u = sqrt((M*M) - C1);
	
	std::cout << "u = " << u << std::endl;
	
	float X1{ };
	X1 = M + u;
	
	float X2{ };
	X2 = M - u;
	
	std::cout<< "X1 = " << X1 << std::endl;
	std::cout<< "X2 = " << X2 << "\n"<< std::endl;
	
	
	
	
	
	
	
	
	
	
	std::cout << "Ejercicio 3: RAZONES TRIGONOMETRICAS\n" << std::endl;
	
	float Cat1{ };
	float Cat2{ };
	float Hip{ };
	float Ang1{ };
	float Ang2{ };
	
	std::cout << "Ingresar cateto Cat1: ";
	std::cin >> Cat1;
	while(Cat1 == 0)
	{
		std::cout << "Valor invalido, ingresar otro valor para cateto Cat1: ";
	    std::cin >> Cat1;
	}
	
	std::cout << "Ingresar cateto Cat2: ";
	std::cin >> Cat2;
	while(Cat2 == 0)
	{
		std::cout << "Valor invalido, ingresar otro valor para cateto Cat2: ";
	    std::cin >> Cat2;
	}
	
	std::cout << "Ingresar Hipotenusa: ";
	std::cin >> Hip;
	while(Hip == 0)
	{
		std::cout << "Valor invalido, ingresar otro valor para la hipotenusa: ";
	    std::cin >> Hip;
	}
	
	std::cout << "Ingresar angulo Ang1: ";
	std::cin >> Ang1;
	while(Ang1 == 0)
	{
		std::cout << "Valor invalido, ingresar otro valor para angulo Ang1: ";
	    std::cin >> Ang1;
	}
	
	std::cout << "Ingresar angulo Ang2: ";
	std::cin >> Ang2;
	while(Ang2 == 0)
	{
		std::cout << "Valor invalido, ingresar otro valor para angulo Ang2: ";
	    std::cin >> Ang2;
	}
	
	
	
	float hipotenusa{ };
	hipotenusa = sqrt((Cat1*Cat1)+(Cat2*Cat2));
	std::cout << "\nHipotenusa = " << hipotenusa << std::endl;
	
	
	
	float senAng1{ };
	Ang1 = Ang1*(M_PI / 180);
	senAng1 = sin(Ang1);
	std::cout << "SENO Ang1 = " << senAng1 << std::endl;
	
	float senAng2{ };
	Ang2 = Ang2*(M_PI / 180);
	senAng2 = sin(Ang2);
	std::cout << "SENO Ang2 = " << senAng2 << std::endl;
	
	
	
	float cosAng1{ };
	Ang1 = Ang1*(M_PI / 180);
	senAng1 = cos(Ang1);
	std::cout << "COSENO Ang1 = " << cosAng1 << std::endl;
	
	float cosAng2{ };
	Ang2 = Ang2*(M_PI / 180);
	cosAng1 = cos(Ang2);
	std::cout << "COSENO Ang2 = " << cosAng2 << std::endl;
	
	
	
	float tgAng1{ };
	Ang1 = Ang1*(M_PI / 180);
	tgAng1 = tan(Ang1);
	std::cout << "TANGETE Ang1 = " << tgAng1 << std::endl;
	
	float tgAng2{ };
	Ang2 = Ang2*(M_PI / 180);
	tgAng2 = tan(Ang2);
	std::cout << "TANGETE Ang2 = " << tgAng2 << std::endl;
	
	
	
	
	
	
	
	
	
	
	
	
    

	
	return 0;
}