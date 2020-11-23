//FEI - CC5661 - Trabalho - Problema 3.3 - greedy

#include <iostream>
#include <stdio.h>
using namespace std;

int getMax(int v[], int n){
	int include_current = v[0] ;
	int exclude_current = 0;
	int max_so_far;

	for(int i = 1; i < n; i++){
		max_so_far = (include_current > exclude_current)? include_current : exclude_current;

		include_current = exclude_current + v[i];
		exclude_current = max_so_far; 
	}

	if(include_current > exclude_current)
		return include_current;
	else
		return exclude_current;

}

int main(){
	int  v[] = {1,2,9,4,5,0,4,11,6};

	int n = sizeof(v)/sizeof(v[0]);
	cout << getMax(v, n) << endl;

	return 0;

}
