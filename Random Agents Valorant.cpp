#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string chara(int a) {
	switch (a) { 
		case 1: return "Brimstone";break;
		case 2: return "Viper";break;
		case 3: return "Omen";break;
		case 4: return "Killjoy";break;
		case 5: return "Cypher";break;
		case 6: return "Sova";break;
		case 7: return "Sage";break;
		case 8: return "Phoenix";break;
		case 9: return "Jett";break;
		case 10: return "Reyna";break;
		case 11: return "Raze";break;
		case 12: return "Breach"; break;
		case 13: return "Skye"; break ;
		case 14: return "Yoru";break;
		case 15: return "Astra";break;
		case 16: return "KAY/O";break;
		case 17: return "Chamber";break;
		case 18: return "Neon";break; 
		} 	
	}

int main() {
	system ("color b");
	int a,b,c; 
	srand(time(NULL));
	cout<<"Naem=";
a1: 
	a=rand() % 18+1;
	string naem=chara(a); 
	if (naem=="Skye" || naem== "Sova"||naem=="Breach") goto a1;
	cout<<chara(a);
	cout<<"\nMud=";
a2:
	b1:
	b=rand() % 18+1; if (b==a) goto b1;
	string mud=chara(b);
	if (mud=="Raze" || mud=="Viper") goto a2;
	cout<<chara(b);
	cout<<"\nIbad=";
a3:
    b2:	
	c=rand() % 18+1; if (c==a || c==b) goto b2;
	string ibad=chara(c);
	if (ibad=="Yoru"||ibad=="Jett") goto a3;
	cout<<chara(c);
}
