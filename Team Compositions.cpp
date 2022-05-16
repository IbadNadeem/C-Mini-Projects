#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string chara(int a) {
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
		case 19: return "Barbara";break;
		case 20: return "Jean";break;
		case 21: return "Qiqi";break;
		case 22:return "Sangonomiya Kokomi";break;
		case 23:return "Sayu";break;
		case 24: return "Diona";break;
		case 25: return "Noelle";break;
		case 26: return "Thoma";break;
		case 27: return "Xinyan";break;
		case 28: return "Zhongli";break;
		case 29: return "Arataki Itto";break;
		case 30: return "Chongyun";break;
		case 31: return "Diluc";break;
		case 32: return "Eula";break;
		case 33: return "Ganyu";break;
		case 34: return "Hu Tao";break;
		case 35: return "Kaeya";break;
		case 36: return "Kamisato Ayaka";break;
		case 37: return "Keqing";break;
		case 38: return "Klee";break;
		case 39: return "Ningguang";break;
		case 40: return "Raiden Shogun";break;
		case 41: return "Razor";break;
		case 42: return "Tartaglia";break;
		case 43:return "Xiangling";break;
		case 44:return "Xiao";break;
		case 45:return "Yanfei";break;
		case 46:return "Yoimiya";break;
		case 47:return "Yae Miko";break;
		case 48: return "Kamisato Ayato";break;
		
} }
int main() {
	srand(time(NULL));
	string e;
	label:
	int a=rand() % 48+1;
	bb:int b=rand() % 48+1; if (b==a) goto bb;
	cc:int c=rand() % 48+1; if (c==a || c==b) goto cc;
	dd:int d=rand() % 48+1; if (d==a || d==b || d==c) goto dd;
	system ("CLS");
	cout<<chara(a)<<endl<<chara(b)<<endl<<chara(c)<<endl<<chara(d);
	cout<<"\n\ntis gud or u wunt more?\n";cin>>e;
	if (e == "y" || "Y") goto label;
	system ("ClS");
	cout<<"Thanks";
	return 0;
}
