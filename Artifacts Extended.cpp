#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string su() {
	int n=rand() % 10000 + 1;
	if (n<=1364) return "HP";
	else if (n>1364 && n<=2728) return "ATK";
	else if (n>2728 && n<=4092) return "DEF";
	else if (n>4092 && n<=5001) return "HP%";
	else if (n>5001 && n<=5910) return "ATK%";
	else if (n>5910 && n<=6819) return "DEF%";
	else if (n>6819 && n<=7728) return "Energy Recharge%";
	else if (n>7728 && n<=8637) return "Elemental Mastery";
	else if (n>8637 && n<=9318) return "CRIT Rate%";
	else return "CRIT DMG%";
}
int main() {
	srand(time(0));
	// rolls either 4 or 5 depends 25%
	int f,n,a[4]={1,1,1,1};
	f=rand()%4+1;
	for (int i=0;i<4;i++) 
	{
		n=rand()%3+0;
		a[n]=a[n]+1;
		if (f==1) 
		{
			i--;f++;
		}
	}
	// calling of subs functions . also unique subs
    string s[4];
	s[0]=su();
s1:  s[1]=su();
		if (s[0]==s[1]) goto s1;
s2: s[2]=su();
		if (s[2]==s[1] || s[2]==s[0]) goto s2;
s3: s[3]=su();
		if (s[3]==s[2] || s[3]==s[1] || s[3]==s[0]) goto s3;
	// actual cout of subs and rolls
	for(int i=0;i<4;i++) {
		cout<<s[i]<<" "<<a[i]<<endl;
	}
}
