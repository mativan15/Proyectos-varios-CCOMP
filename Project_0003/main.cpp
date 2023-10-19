// ASCII codes

#include <iostream>

int main() 
{    
	std::system("cls");
	std::cout<<"\x1B[2J";
	std::cout<<"\x1B[=4h";

	std::cout<<"\x1B[1;94;46m";		
	std::cout<<"/**************************************************/\n";
	std::cout<<"Profesor: D.Sc. Manuel Eduardo Loaiza Fernandez\n\n";
	std::cout<<"\x1B[m";

	char ejem{'\0'};

	for( int i = 32; i < 258 ; i++)
	{
		ejem = static_cast<char>(i);
		std::cout<<"char = " << ejem << " - int = " << i << "\n";
	};
	
	return 0;
}
