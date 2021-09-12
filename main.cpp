#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}
void algortimo_seleccion(int a[], int n) {
    int i, j, aux, min;
    for (i=0; i<n; i++)
    {
        min=i;
        for (j=i+1; j<n; j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
    }
    aux= a[i];
    a[i]=a[min];
    a[min]=aux;
}