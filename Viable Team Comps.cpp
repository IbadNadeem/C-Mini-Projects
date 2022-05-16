#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string sup(int a) {
	switch (a) {
		case 1: return "Albedo";break;
		case 2: return "Aloy";break;
		case 3: return "Amber";break;
		case 4: return "Beidou";break;
		case 5: return "Bennett";break;
		case 6: return "Ficshl";break;
		case 7: return "Gorou";break;
		case 8: return "Kaedehara Kazuha";break;
		case 9: return "Kujou Sara";break;
		case 10: return "Lisa";break;
		case 11: return "Mona";break;
		case 12:return "Rosaria";break;
		case 13: return "Shenhe";break;
		case 14:return "Sucrose";break;
		case 15:return "Traveler";break;
		case 16:return "Venti";break;
		case 17:return "Xingqui";break;
		case 18:return "Yun Jin";break;
		
} 

}
string heal(int a) {
	switch (a) {
		case 1: return "Barbara";break;
		case 2: return "Jean";break;
		case 3: return "Qiqi";break;
		case 4:return "Sangonomiya Kokomi";break;
		case 5:return "Sayu";break;
	}
	
}
string shield(int a) {

	switch (a) {
		case 1: return "Diona";break;
		case 2: return "Noelle";break;
		case 3: return "Thoma";break;
		case 4: return "Xinyan";break;
		case 5: return "Zhongli";break;
	}

}
string dps(int a) {
	switch (a) {
		case 1: return "Arataki Itto";break;
		case 2: return "Chongyun";break;
		case 3: return "Diluc";break;
		case 4: return "Eula";break;
		case 5: return "Ganyu";break;
		case 6: return "Hu Tao";break;
		case 7: return "Kaeya";break;
		case 8: return "Kamisato Ayaka";break;
		case 9: return "Keqing";break;
		case 10: return "Klee";break;
		case 11: return "Ningguang";break;
		case 12: return "Raiden Shogun";break;
		case 13: return "Razor";break;
		case 14: return "Tartaglia";break;
		case 15:return "Xiangling";break;
		case 16:return "Xiao";break;
		case 17:return "Yanfei";break;
		case 18:return "Yoimiya";break;
	}
}
int main() {
	int a,b,c,d;
	string e;
	srand(time(NULL));
	loop:
	a=rand() % 18+1;
	b=rand() % 18+1;
	c=rand() % 5+1;
	d=rand() % 5+1;
	system ("CLS");
	cout<<"DPS= "<<dps(a)<<"\nSupport= "<<sup(b);
	cout<<"\nShielder= "<<shield(c)<<"\nHealer= "<<heal(d);
	cout<<"\n\ntis gud or u wunt sumthin' else?(y/n)\n"; cin>>e;
	if (e=="y" or e=="Y") goto loop;
	cout<<"\nThank You For Using Our Program!";
	return 0;
}
