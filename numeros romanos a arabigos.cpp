#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


void proceso();
void finalizar();

int main(){
	proceso();
    finalizar();
	return 0;
}


void proceso(){
	int u,d,c,m,numero;
	cout<<"Escriba un numero a convertir: "<<endl;cin>>numero; 
	u = numero%10; 
	numero /= 10; 
	d = numero%10; 
	numero /= 10;
	c = numero % 10; 
	numero /= 10; 
	m = numero % 10 ; 
	numero /= 10;
	
	switch(m){
		case 1: cout<<"M";
		break;
		case 2: cout<<"MM"; 
		break;
		case 3: cout<<"MMM";
		break;
	}
	
	switch(c){
		case 1: cout<<"C";
		break;
		case 2: cout<<"CC";
		break;
		case 3: cout<<"CCC";
		break;
		case 4: cout<<"CD";
		break;
		case 5: cout<<"D";
		break;
		case 6: cout<<"DC";
		break;
		case 7: cout<<"DCC";
		break;
		case 8: cout<<"DCCC";
		break;
		case 9: cout<<"CM";
		break;
	}
	
	switch(d){
		case 1: cout<<"X";
		break;
		case 2: cout<<"XX";
		break;
		case 3: cout<<"XXX";
		break;
		case 4: cout<<"XL";
		break;
		case 5: cout<<"L";
		break;
		case 6: cout<<"LX";
		break;
		case 7: cout<<"LXX";
		break;
		case 8: cout<<"LXXX";
		break;
		case 9: cout<<"XC";
		break;
	}
	
	switch(u){
		case 1: cout<<"I";
		break;
		case 2: cout<<"II";
		break;
		case 3: cout<<"III";
		break;
		case 4: cout<<"IV";
		break;
		case 5: cout<<"V";
		break;
		case 6: cout<<"VI";
		break;
		case 7: cout<<"VII";
		break;
		case 8: cout<<"VIII";
		break;
		case 9: cout<<"IX";
		break;
	}
}

void finalizar(){
	
	int opc;
	bool opc2=false;
	do{

        cout<<"\nDeseas repetir el programa? SI=1   NO=2"<<endl;cin>>opc;

		if(opc==1){
			
			system("cls");
			main();
			
		}else if(opc==2){
			system("cls");
			cout<<"Hasta luego......."<<endl;
			exit(0);
		}
		else{
			system("cls");
			cout<<"Esta opcion no existe "<<endl;
			opc2=true;
			
		}
	}while(opc2==true);
}
