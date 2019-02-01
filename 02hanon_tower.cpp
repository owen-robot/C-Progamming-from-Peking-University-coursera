//============================================================================
// Name        : hanon_tower.cpp
// Author      : Owen
// Version     :
// Copyright   : Your copyright notice
// Description : 第3课，汉诺塔问题
//============================================================================

#include <iostream>
using namespace std;

void move(int m,char x,char y,char z){
	if (m == 1){
		cout<<"把一个盘子从"<<x<<"移动到"<<z<<endl;
	}
	else{
		move(m-1,x,z,y);
		cout<<"把一个盘子从"<<x<<"移动到"<<z<<endl;
		move(m-1,y,x,z);
	}
}

int main() {
	char in;
	while((in = cin.get()) && (in!=' ')){
		fflush(stdin);
		int n;
		char x,y,z;
		cout<<"请输入要移动的盘子数 n=";
		cin>>n;
		cout<<"从";
		cin>>x;
		cout<<"经过";
		cin>>y;
		cout<<"移动到";
		cin>>z;
		move(n,x,y,z);
		fflush(stdin);
	}
	cout<<"The End"<<endl;
	return 0;
}
