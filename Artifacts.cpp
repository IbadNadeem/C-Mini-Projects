#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int sands0,gob0,cir0;
string sands1,sands2,sands3,sands4,gob1,gob2,gob3,gob4,cir1,cir2,cir3,cir4,cir5;
string artiname (int arti) {
	switch (arti) {
		case 1: return "Flower of Life";
		case 2: return "Plume of Death";
		case 3: return "Sands of Eon";
		case 4: return "Goblet of Eonothem";
		case 5: return "Circlet of Logos";
	}
}
string mainstat(int mains) {
	int m=rand() % 10000+1;
	switch (mains) {
	case 1: {
		return "HP";
		break;
	}
	case 2: {
		return "ATK";
		break;
	}
	case 3:{
		if (m<=2668) { sands0=1; return "HP%";}
		else if (m>2668 && m<=5334) {sands0=2;return "ATK%";}
		else if (m>5334 && m<=8000) {sands0=3;return "DEF%";}
		else if (m>8000 && m<=9000) {sands0=4;return "Energy Recharge";}
		else {sands0=5;return "Elemental Mastery";}
		break;
	}
	case 4:{
			if (m<=2125) {gob0=1;return "HP%";}
		else if (m>2125 && m<=4250) {gob0=2;return "ATK%";}
		else if (m>4250 && m<=6250) {gob0=3;return "DEF%";}
		else if (m>6250 && m<=6750) {gob0=0;return "Pyro DMG Bonus%";}
		else if (m>6750 && m<=7250) {gob0=0;return "Electro DMG Bonus%";}
		else if (m>7250 && m<=7750) {gob0=0;return "Cryo DMG Bonus%";}
		else if (m>7750 && m<=8250) {gob0=0;return "Hydro DMG Bonus%";}
		else if (m>8250 && m<=8750) {gob0=0;return "Anemo DMG Bonus%";}
		else if (m>8750 && m<=9250) {gob0=0;return "Geo DMG Bonus%";}
		else if (m>9250 && m<=9750) {gob0=0;return "Physical DMG Bonus%";}
		else {gob0=4;return "Elemental Mastery";}
		break;
	}
	case 5:{
		if (m<=2200) {cir0=1;return "HP%";}
		else if (m>2200 && m<=4400) {cir0=2;return "ATK%";}
		else if (m>4400 && m<=6600) {cir0=3;return "DEF%";}
		else if (m>6600 && m<=7600) {cir0=5;return "CRIT Rate%";}
		else if (m>7600 && m<=8600) {cir0=6;return "CRIT DMG%";}
		else if (m>8600 && m<=9600) {cir0=0;return "Healing Bonus%";}
		else {cir0=4;return "Elemental Mastery";}
		break;	
		}
	}
}
string flower() {
	int n=rand() % 10000 + 1;
	if (n<=1579) return "ATK";
	else if (n>1579 && n<=3158) return "DEF";
	else if (n>3158 && n<=4211) return "HP%";
	else if (n>4211 && n<=5264) return "ATK%";
	else if (n>5264 && n<=6317) return "DEF%";
	else if (n>6317 && n<=7370) return "Energy Recharge%";
	else if (n>7370 && n<=8423) return "Elemental Mastery";
	else if (n>8423 && n<=9212) return "CRIT Rate%";
	else return "CRIT DMG%";
}
string feather() {
	int n=rand() % 10000 + 1;
	if (n<=1579) return "HP";
	else if (n>1579 && n<=3158) return "DEF";
	else if (n>3158 && n<=4211) return "HP%";
	else if (n>4211 && n<=5264) return "ATK%";
	else if (n>5264 && n<=6317) return "DEF%";
	else if (n>6317 && n<=7370) return "Energy Recharge%";
	else if (n>7370 && n<=8423) return "Elemental Mastery";
	else if (n>8423 && n<=9212) return "CRIT Rate%";
	else return "CRIT DMG%";
}
string sands() {
	int n=rand() % 1000 + 1;
	if (n<=150) return "HP";
	else if (n>150 && n<=300) return "ATK";
	else if (n>300 && n<=450) return "DEF";
	else if (n>450 && n<=525) return "CRIT Rate%";
	else if (n>525 && n<=600) return "CRIT DMG%";
	else if (n>600 && n<=700) return sands1;
	else if (n>700 && n<=800) return sands2;
	else if (n>800 && n<=900) return sands3;
	else return sands4;
}
string goblet_1(){
	
	int n=rand() % 1000 + 1;
	if (n<=150) return "HP";
	else if (n>150 && n<=300) return "ATK";
	else if (n>300 && n<=450) return "DEF";
	else if (n>450 && n<=525) return "CRIT Rate%";
	else if (n>525 && n<=600) return "CRIT DMG%";
	else if (n>600 && n<=700) return gob1;
	else if (n>700 && n<=800) return gob2;
	else if (n>800 && n<=900) return gob3;
	else return gob4;
}
string goblet_2() {
	int n=rand() % 10000 + 1;
	if (n<=1364) return "HP";
	else if (n>1364 && n<=2728) return "ATK";
	else if (n>2728 && n<=4092) return "DEF";
	else if (n>4092 && n<=5001) return "HP%";
	else if (n>5001 && n<=5910) return "ATK%";
	else if (n>5910 && n<=6819) return "DEF%";
	else if (n>6819 && n<=7728) return "Energy Recharge";
	else if (n>7728 && n<=8637) return "Elemental Mastery";
	else if (n>8637 && n<=9318) return "CRIT Rate%";
	else return "CRIT DMG%";
}
string circlet_1(){
	int n=rand() % 10000+1;
	if (n<=1463) return "HP";
	else if (n>1463 && n<=2926) return "ATK";
	else if (n>2926 && n<=4389) return "DEF";
	else if (n>4389 && n<=5365) return "HP%";
	else if (n>5365 && n<=6341) return "ATK%";
	else if (n>6341 && n<=7317) return "DEF%";
	else if (n>7317 && n<=8293) return "Energy Recharge";
	else if (n>8293 && n<=9269) return "Elemental Mastery";
	else return cir5;
}
string circlet_2() {
	int n=rand() % 1000 + 1;
	if (n<=150) return "HP";
	else if (n>150 && n<=300) return "ATK";
	else if (n>300 && n<=450) return "DEF";
	else if (n>450 && n<=525) return "CRIT Rate%";
	else if (n>525 && n<=600) return "CRIT DMG%";
	else if (n>600 && n<=700) return cir1;
	else if (n>700 && n<=800) return cir2;
	else if (n>800 && n<=900) return cir3;
	else return cir4;
}
int main() {
	srand(time(NULL));
	// domain name
	int a=rand() % 2+1; 
	string dom=(a==1)? "Emblem Of Severed Fate":"Shimenawa's Reminiscence";
	cout<<dom<<endl<<endl;
	// mainstat using functions
	int n=rand() % 5+1;
	cout<<artiname(n)<<endl;
	cout<<mainstat(n);
	// substats using lots of functions
	string sub0,sub1,sub2,sub3;
	int p=rand() % 4+1;
	cout<<"\n\nSubstats\n\n";
	switch (n) {
		case 1:{
			sub0=flower();
	flow1:  sub1=flower();
			if (sub1==sub0) goto flow1;
	flow2: sub2=flower();
			if (sub2==sub0 || sub2==sub1) goto flow2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	flow3: sub3=flower();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto flow3;
			cout<<sub3<<endl; }
			break;
		}
		case 2:{
			sub0=feather();
	feat1:  sub1=feather();
			if (sub1==sub0) goto feat1;
	feat2: sub2=feather();
			if (sub2==sub0 || sub2==sub1) goto feat2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	feat3: sub3=feather();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto feat3;
			cout<<sub3<<endl; }
			break;
		}
		case 3: {
			if (sands0==1) {
				sands1="ATK%";sands2="DEF%";
				sands3="Energy Recharge";sands4="Elemental Mastery";
			}
			else if (sands0==2) {
				sands1="HP%";sands2="DEF%";
				sands3="Energy Recharge";sands4="Elemental Mastery";
			}
			else if (sands0==3) {
				sands1="ATK%";sands2="HP%";
				sands3="Energy Recharge";sands4="Elemental Mastery";
			}
			else if (sands0==4) {
				sands1="ATK%";sands2="DEF%";
				sands3="HP%";sands4="Elemental Mastery";
			}
			else {
				sands1="ATK%";sands2="DEF%";
				sands3="Energy Recharge";sands4="HP%";
			}
			sub0=sands();
	s1:  sub1=sands();
			if (sub1==sub0) goto s1;
	s2: sub2=sands();
			if (sub2==sub0 || sub2==sub1) goto s2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	s3: sub3=sands();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto s3;
			cout<<sub3<<endl; }
			break;
		}
		case 4:{
			if (gob0!=0) {
			if (gob0==1) {
				gob1="ATK%";gob2="DEF%";
				gob3="Energy Recharge";gob4="Elemental Mastery";
			}
			else if (gob0==2) {
				gob1="HP%";gob2="DEF%";
				gob3="Energy Recharge";gob4="Elemental Mastery";
			}
			else if (gob0==3) {
				gob1="ATK%";gob2="HP%";
				gob3="Energy Recharge";gob4="Elemental Mastery";
			}
			else {
				gob1="ATK%";gob2="DEF%";
				gob3="Energy Recharge";gob4="HP%";
			}
			sub0=goblet_1();
	g1:  sub1=goblet_1();
			if (sub1==sub0) goto g1;
	g2: sub2=goblet_1();
			if (sub2==sub0 || sub2==sub1) goto g2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	g3: sub3=goblet_1();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto g3;
			cout<<sub3<<endl; }
			break;
			}
			else {
			sub0=goblet_2();
	gg1:  sub1=goblet_2();
			if (sub1==sub0) goto gg1;
	gg2: sub2=goblet_2();
			if (sub2==sub0 || sub2==sub1) goto gg2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	gg3: sub3=goblet_2();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto gg3;
			cout<<sub3<<endl; }
			break;	
			}
		}
		case 5:{
			if (cir0==0) {
			sub0=goblet_2();
	heal1:  sub1=goblet_2();
			if (sub1==sub0) goto heal1;
	heal2: sub2=goblet_2();
			if (sub2==sub0 || sub2==sub1) goto heal2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	heal3: sub3=goblet_2();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto heal3;
			cout<<sub3<<endl;}
				break;
			}
			else if (cir0==5 || cir0==6) 
		{
				if (cir0==5) {
					cir5="CRIT DMG";
				}
				else {
					cir5="CRIT Rate";
				}
			sub0=circlet_1();
	c1:  sub1=circlet_1();
			if (sub1==sub0) goto c1;
	c2: sub2=circlet_1();
			if (sub2==sub0 || sub2==sub1) goto c2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	c3: sub3=circlet_1();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto c3;
			cout<<sub3<<endl;
			}
		}
			else {
				if (cir0==1) {
				cir1="ATK%";cir2="DEF%";
				cir3="Energy Recharge";cir4="Elemental Mastery";
			}
			else if (cir0==2) {
				cir1="HP%";cir2="DEF%";
				cir3="Energy Recharge";cir4="Elemental Mastery";
			}
			else if (cir0==3) {
				cir1="ATK%";cir2="HP%";
				cir3="Energy Recharge";cir4="Elemental Mastery";
			}
			else if (cir0==4){
				cir1="ATK%";cir2="DEF%";
				cir3="Energy Recharge";cir4="HP%";
			}
			sub0=circlet_2();
	cc1:  sub1=circlet_2();
			if (sub1==sub0) goto cc1;
	cc2: sub2=circlet_2();
			if (sub2==sub0 || sub2==sub1) goto cc2;
			cout<<sub0<<endl<<sub1<<endl<<sub2<<endl;
			if (p==1) {
	cc3: sub3=circlet_2();
			if (sub3==sub2 || sub3==sub1 || sub3==sub0) goto cc3;
			cout<<sub3<<endl; }
			}
		}
	}
}

