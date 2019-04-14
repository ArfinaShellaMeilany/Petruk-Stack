// Membuat Program Dengan Cara Mengimplementasikan Konsep linked list untuk membuat stack
/* Nama     = Arfina Shella Meilany
   NPM      = 1817051005
*/

#include <iostream>
using namespace std;

struct Element 
{
    int data;
    Element *hub;
};
Element *top = NULL;
bool isEmpty()
{
    if(top == NULL)
	return true; else
	return false;
    }

void push(int nilai)
{
	Element *bantu = new Element();
	bantu->data = nilai;
	bantu->hub = top;
	top = bantu;
	
	}	

void pop ()
{
	if ( isEmpty() );
	else
{
	cout<<"Stack Telah Di Pop\n";
	Element *bantu = top;
	top = top -> hub;
	delete(bantu);
	}
}

void lihatatas()
{
	if ( isEmpty() )
	cout<<"Stack Kosong";
	else
	cout<<"Elemen Diatas = "<< top->data;
	cout<<endl;
}

void cetakstack()
{
	if ( isEmpty() )
	cout<<"Stack Kosong";
	else
{
	Element *temp=top;
	while(temp!=NULL)
	{	
	cout<<temp->data<<"\n";
	temp=temp->hub;
		}

	}
}

int main()
{
	int pilih, flag=1, nilai;

cout<<"||+++++++++++++++++++++++++++++++++++++++++++++++++++++||"<<endl;
cout<<"||               STACK WITH LINKED LIST                ||"<<endl;
cout<<"||+++++++++++++++++++++++++++++++++++++++++++++++++++++||"<<endl<<endl;
cout<<"Menu Program :";
 while( flag == 1){
cout<<"\n||+++++++++++++++++++++||\n";
cout<<"1.Cetak Stack \n";
cout<<"2.Push \n";
cout<<"3.Pop \n";
cout<<"4.Lihat elemen diatas \n";
cout<<"5.Keluar \n";
cout<<"||+++++++++++++++++++++||\n";
cout<<"Pilih Menu  : ";cin>>pilih;
cout<<"||+++++++++++++++++++++||\n";
cout<<endl<<endl;
	switch (pilih)
	{
	case 1: system("cls");
			cetakstack();
			break;
	case 2: system("cls");
			cout<<"Masukan Nilai: ";
			cin>>nilai;
			push(nilai);		
			break;
	case 3: system("cls");
			pop();
			break;
	case 4: system("cls");
			lihatatas();
			break;
	case 5: system("cls");
			flag = 0;
			cout << endl << endl;
			break;
         
 }
 }
    return 0;
}
