#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

void menu();
void verificacion();

int main(){
	cout<<"\n";
	cout<<"   88 .dP'Y8  dP'Yb     88 88b 88 888888 888888  dP''b8 88''Yb 88 888888 Yb  dP  \n";
	cout<<"   88 `Ybo.' dP   Yb    88 88Yb88   88   88__   dP   `' 88__dP 88   88    YbdP   \n";
	cout<<"   88 o.`Y8b Yb   dP    88 88 Y88   88   88''   Yb  '88 88'Yb  88   88     8P    \n";
	cout<<"   88 8bodP'  YbodP     88 88  Y8   88   888888  YboodP 88  Yb 88   88    dP     \n";
	cout<<"\n\n";
	verificacion();
	
    return 0;
}

void verificacion(){
	char hash[900]="0", resultado_hash[900]="0";
	fflush(stdin);
	cout<<"[+] Inserte el HASH esperado: ";
    cin.getline(hash, 900, '\n');
    strupr(hash);
        
    fflush(stdin);
    cout<<"\n[+] Inserte el resultado del HASH: ";
	cin.getline(resultado_hash, 900, '\n');
	strupr(resultado_hash);

	if(strcmp(hash, resultado_hash)==0){
		cout<<"\n [+] -------------------------------------------- [La ISO es correcta] -------------------------------------------- [+]";
		getch();
    }
    else{
		cout<<"\n [+] ------------------------------------------- [LA ISO ESTA CORRUPTA] ------------------------------------------- [+]";
		getch();
    }
	
	menu();
}

void menu(){
	int n;
	do{
		cout<<"\n\n";
		cout<<"\t\t\t\t\t\t[1] Verificar nuevo HASH\n";
		cout<<"\t\t\t\t\t\t[0] Salir\n\n";
		cout<<"\t\t\t\t\t\t[+] "; cin>>n;
	}while(n != 1 && n != 0);
	
	if(n==1){
		system("cls");
		main();
	}
	else{
		exit(0);
	}
}
