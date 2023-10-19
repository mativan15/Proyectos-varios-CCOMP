// EJERCICIO

#include <iostream>
#include <math.h>
#include <cmath>

int main()
{
    std::cout << "Ingrese x1: "; 
    int x1{ }; 
    std::cin >> x1; 
	std::cout << "Ingrese x2: "; 
    int x2{ }; 
    std::cin >> x2; 
	std::cout << "Ingrese y1: "; 
    int y1{ }; 
    std::cin >> y1; 
	std::cout << "Ingrese y2: "; 
    int y2{ }; 
    std::cin >> y2; 
	
	float m{ }; 
	m=(y2-y1)/(x2-x1);
	float b1{ }; 
	b1=y1-(m*x1);
	
	std::cout << "\nLa ecuacion es: y = " << m << 'x'<< "+ " << b1;
    
	std::cout << "\n\nax^2+bx+c=0\nIngrese a: "; 
    float a{ }; 
    std::cin >> a; 
	std::cout << "Ingrese b: "; 
    float b{ }; 
    std::cin >> b; 
	std::cout << "Ingrese c: "; 
    float c{ }; 
    std::cin >> c; 
	float rt1{ };
	float b_cu =pow(b,2);
	float ac=(4*a*c);
	rt1=(-b+sqrt(b_cu - ac))/(2*a);
	float rt2{ };
	rt2=(-b-sqrt(b_cu - ac))/(2*a);
	
	float rp1 { };
	rp1 = -b/2 + sqrt((pow(b,2)/4)-c);
	float rp2 { };
	rp2 = -b/2 - sqrt((pow(b,2)/4)-c);
	
	std::cout << "\nFormula tradicional:\nLas respuestas son: x1 = " << rt1 << ", x2 = " << rt2 << '\n';
	std::cout << "\nMetodo de PO-SHEN LOH:\nLas respuestas son: x1 = " << rp1 << ", x2 = " << rp2 << '\n';
	
	std::cout << "\nIngrese primer cateto:"; 
    float c1{ }; 
    std::cin >> c1; 
	std::cout << "\nIngrese segundo cateto:"; 
    float c2{ }; 
    std::cin >> c2; 
	//std::cout << "Ingrese c: "; 
    float h{ }; 
	float p1{ };
	p1=pow(c1,2);
	float p2{ };
	p2=pow(c2,2);
	h=sqrt(p1+p2);
	std::cout << "\nLa hipotenusa es: " << h;
    //std::cin >> c; 
	float sen{ };
	sen=c2/h;
	std::cout << "\nEl seno es: " << sen;
	float cos{ };
	cos=c1/h;
	std::cout << "\nEl coseno es: " << cos;
	float tg{ };
	tg=c2/c1;
	std::cout << "\nLa tangente es: " << tg;
	
	
	return 0;
}



