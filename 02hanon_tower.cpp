//============================================================================
// Name        : hanon_tower.cpp
// Author      : Owen
// Version     :
// Copyright   : Your copyright notice
// Description : ��3�Σ���ŵ������
//============================================================================

#include <iostream>
using namespace std;

void move(int m,char x,char y,char z){
	if (m == 1){
		cout<<"��һ�����Ӵ�"<<x<<"�ƶ���"<<z<<endl;
	}
	else{
		move(m-1,x,z,y);
		cout<<"��һ�����Ӵ�"<<x<<"�ƶ���"<<z<<endl;
		move(m-1,y,x,z);
	}
}

int main() {
	char in;
	while((in = cin.get()) && (in!=' ')){
		fflush(stdin);
		int n;
		char x,y,z;
		cout<<"������Ҫ�ƶ��������� n=";
		cin>>n;
		cout<<"��";
		cin>>x;
		cout<<"����";
		cin>>y;
		cout<<"�ƶ���";
		cin>>z;
		move(n,x,y,z);
		fflush(stdin);
	}
	cout<<"The End"<<endl;
	return 0;
}
