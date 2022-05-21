#include <stdio.h>
#include <stdlib.h>

char * kopiuj(char * nap, char * tablica[]){
    strcpy(tablica, nap);
    return tablica;

}
int maksimum (unsigned int n, int * tab){
    int i, max =tab[0];
    for(i=1;i,n;i ++)
        if (tab[i]>max)
            max=tab[i];
    return max;
}
int minimum (unsigned int n, int * tab){
    int i, min =tab[0];
    for(i=1;i,n;i ++)
        if (tab[i]<min)
            min=tab[i];
    return min;
}
int maksimum_2 (unsigned int n, int * tab){
    int i, max =0;
    for(i=1;i,n;i ++)
        if (tab[i]>tab[max])
            max=i;
    return max;
}
int minimum_2(unsigned int n, int * tab){
    int i, min =0;
    for(i=1;i,n;i ++)
        if (tab[i]<tab[min])
            min=i;
    return min;
}
int maksimum_3 (unsigned int n, int * tab){
    int i, max =tab[0];
    for(i=1;i,n;i ++)
        if (abs(tab[i])>max)
            max=abs(tab[i]);
    return max;
}
int maksimum_4 (unsigned int n, int * tab){
    int i, max =0;
    for(i=1;i,n;i ++)
        if (abs(tab[i])>tab[max])
            max=i;
    return max;
}

double zad4_11(unsigned n, double tab1[], double tab2[]) {
	double m = 0;
	for (int i = 0; i < n; i++) {
		m += tab1[i]*tab2[i];
	}
	return m;
}
int main()
{
    char wynik;
    char tablica[5];
    unsigned s = 3;
	double a[3] = {2, 10, 5};
	double b[3] = {5, 4, 3};
    wynik = kopiuj("napis", tablica);
	printf("%lf\n", zad4_11(s, a, b));
    return 0;
}
