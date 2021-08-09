//Uri2187

#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int v, i;
	for (i = 1; i != -1; i++) {
		scanf ("%d", &v);
		if (v == 0){
			i = -1;
			break;
		}
		int ci = 0, de = 0, cc = 0, u = 0;
		if (v >= 50){
			ci = v / 50;
			v = v % 50;
		}
		if (v >= 10){
			de = v / 10;
			v = v % 10;
		}
		if (v >= 5){
			cc = v / 5;
			v = v % 5;
		}
		if (v >= 1){
			u = v / 1;
			v = v % 1;
		}
		printf ("Teste %d\n", i);
		printf ("%d %d %d %d\n",ci, de, cc, u);
		printf ("\n");
	}	

return 0;
}