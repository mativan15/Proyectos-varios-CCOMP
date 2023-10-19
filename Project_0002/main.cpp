// Numeros primos
#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n{0};
	std::cout<<"\nIngrese un numero: "<<std::endl;
	cin>> n;
	
	if ( n < 2  )
	{
		std::cout <<"\nNo tenemos numeros primos !!!\n"; 
	}
	else
	{
		while( n >= 2 )
		{
			int nTmp = n-1;
			int contador{0};
			
			while( nTmp >= 2 )
			{
				if( ((n%nTmp) == 0))
				{
					contador++;
				}
				
				if( contador > 0 )
				{
					break;
				}
				
				nTmp--;
			}
			
			if(contador == 0 )
			{
				std::cout<<"\a\nPrimo = " << n;
			}
			
			n--;
		} 
	}
			
	return 0;
}