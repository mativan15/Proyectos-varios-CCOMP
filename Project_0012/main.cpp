#include <iostream>
#include <string>

using namespace std;
void caratula(){
	string universidad = "Universidad Catolica San Pablo "; 
	string escuela = "Escuela Profesional de Ciencia de la Computacion I"; 
	string curso ="Curso de Ciencia de la Computacion I"; 
	string alumnos = "Alumno: \nIvan Matthias Sardon Medina \n";
	string ciudad_año = "Arequipa 2023 - II";
	system("cls"); 
	cout << "\x1B[H" << "\x1B[3;34m" << "//" << endl << "\x1B[m";
    cout << "\x1B[31;5;88m" << universidad<< "\x1B[m"<< "\n";
	cout << "\x1B[33;5;88m" << escuela << "\x1B[m"<< "\n";
	cout << curso << "\n";
	cout << "\x1B[38;5;46m" << alumnos<< "\x1B[m"<< "\n";
	cout << ciudad_año << "\n";
	cout << "\x1B[3;34m"<< "//" << endl << "\x1B[m";  
}

int main(){
    bool bucle{true}; 
	int res{ };
	int num{ };
	char rep{ };
	caratula();
	do {
		bucle=true;
		bool primo{false};
		cout << "\nBienvenido\nIngrese un numero del 1 al 20:\n";
		cin >> num;
		if (cin.fail() || !(num>0 && num<=20)){
			cout << "\nEl valor ingresado no es valido, intente de nuevo\n ";
			cin.clear();           
			cin.ignore(100, '\n');
			continue;
		} else {
			for (int i=2 ; i<num ; i++){
				res = num%i;
				if (res==0){
					primo=false;
					break;
				} else{
					primo=true;
				}
			}
			if (primo==false){
				cout << "\nEl numero " << num << " no es primo, intente de nuevo\n ";
				bucle=true;
				continue;
			} else {
				cout << "\nEl numero " << num << " es primo\nDibujando X:\n";
				int var1,var2{};
				var1 = 0;
				var2= num-1;
				for(int i = 0; i< num;i++){
					cout << "\n ";//nueva fila
					for(int j = 0; j< num;j++){//nueva columna
						if (j == var1){
							cout << " @";
						} else if (j == var2){
							
							cout << " @";
						} else {
							cout << "  ";
						}
					}
					var1++;
					var2--;
				}
			}
		}
		cout << "\n\nIngrese 'q' para detener, otra tecla para repetir: \n"; 
		cin >> rep;
		if (rep=='q' || rep =='Q'){
			bucle=false;
		}
	} while (bucle); 
	cout << "\nFin del programa";
	return 0;
}



