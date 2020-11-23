//FEI - CC5661 - Trabalho - Problema 3.3 - Recursivo

#include <iostream>
#include <stdio.h>


using namespace std;


int getMax(int v[], int n, int i){

	if(i < 0 )
		return 0;
	if(i == 0)
		return v[0];
	if(i == 1)
		return (v[0] > v[1])? v[0] : v[1];
	
	return(getMax(v, n, i - 2) + v[i]) > getMax(v, n, i - 1)? getMax(v, n, i-2) + v[i] : getMax(v, n, i - 1);
	
}

int main (){
	int v[] = {1,2,9,4,5,0,4,11,6};
	int n = sizeof(v)/sizeof(v[0]);
	cout << getMax(v, n, n-1) << endl;


	return 0;
}
