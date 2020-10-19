#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "TDALibros.h"
#define listBook 33

void menu();
void clear_screen();
void showBook();
void showBookReverse();
void bubleSortAlto(struct Libro[], int);
void bubleSortAltoReverse(struct Libro[], int);
void bubleSortAncho(struct Libro[], int);
void bubleSortAnchoReverse(struct Libro[], int);
void bubleSortTitulo(struct Libro[], int);
void bubleSortTituloReverse(struct Libro[], int);
void bubleSortFuente(struct Libro[], int);
void bubleSortFuenteReverse(struct Libro[], int);

int i;

int main(){

    menu();

  return 0;
}

void menu(){
  int opc;
  printf("Ordenar por:\n1. Alto(Ascendente)\n2. Alto(Descendente)\n3. Ancho(Ascendente)\n4. Ancho(Descendente)\n5. Titulo(Ascendente)\n6. Titulo(Descendente)\n7. Fuente(Ascendente)\n8. Fuente(Descendente)\n");
  scanf("%d", &opc);
  clear_screen();
  switch (opc) {
    case 1:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortAlto(objLibro, listBook);
    break;
    case 2:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortAltoReverse(objLibro, listBook);
    break;
    case 3:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortAncho(objLibro, listBook);
    break;
    case 4:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortAnchoReverse(objLibro, listBook);
    break;
    case 5:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortTitulo(objLibro, listBook);
    break;
    case 6:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortTituloReverse(objLibro, listBook);
    break;
    case 7:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortFuente(objLibro, listBook);
    break;
    case 8:
      printf("Original\n");
      showBook();
      printf("\n");
      printf("Cambiado\n");
      bubleSortFuenteReverse(objLibro, listBook);
    break;
    default:
    printf("Opcion no valida\n");
    break;
  }
}

void clear_screen(){
#ifdef WINDOWS
    system("cls");
#else
    // Assume POSIX
    system ("clear");
#endif
}

void showBook(){
  for(i=0; i<listBook; i++){
    printf("%.1f\n",objLibro[i].objHoja.alto);
    printf("%.2f\n",objLibro[i].objHoja.ancho);
    printf("%s\n",objLibro[i].objHoja.titulo);
    printf("%s\n\n",objLibro[i].objHoja.fuente);
  }
}
void showBookReverse(){
  for(i=listBook-1; i>=0; i--){
    printf("%.1f\n",objLibro[i].objHoja.alto);
    printf("%.2f\n",objLibro[i].objHoja.ancho);
    printf("%s\n",objLibro[i].objHoja.titulo);
    printf("%s\n\n",objLibro[i].objHoja.fuente);
  }
}

//Orenamiento cuando la llave es el alto
void bubleSortAlto(struct Libro objLibro[], int n){
  int i, j;
  float cubetaAlto,cubetaAncho;
  char *cubetaTitulo;
  char * cubetaFuente;
  for (i = 0; i < n-1; i++)
  	for (j = 0; j < n-i-1; j++)
  		if (objLibro[j].objHoja.alto > objLibro[j+1].objHoja.alto){

        cubetaAlto = objLibro[j].objHoja.alto;
        cubetaAncho = objLibro[j].objHoja.ancho;
        cubetaTitulo = objLibro[j].objHoja.titulo;
        cubetaFuente = objLibro[j].objHoja.fuente;
        objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
        objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
        objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
        objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
        objLibro[j+1].objHoja.alto = cubetaAlto;
        objLibro[j+1].objHoja.ancho = cubetaAncho;
        objLibro[j+1].objHoja.titulo = cubetaTitulo;
        objLibro[j+1].objHoja.fuente = cubetaFuente;
      }
      showBook();
  }
void bubleSortAltoReverse(struct Libro objLibro[], int n){
  int i, j;
  float cubetaAlto,cubetaAncho;
  char *cubetaTitulo;
  char * cubetaFuente;
  for (i = 0; i < n-1; i++)
  	for (j = 0; j < n-i-1; j++)
  		if (objLibro[j].objHoja.alto > objLibro[j+1].objHoja.alto){

        cubetaAlto = objLibro[j].objHoja.alto;
        cubetaAncho = objLibro[j].objHoja.ancho;
        cubetaTitulo = objLibro[j].objHoja.titulo;
        cubetaFuente = objLibro[j].objHoja.fuente;
        objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
        objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
        objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
        objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
        objLibro[j+1].objHoja.alto = cubetaAlto;
        objLibro[j+1].objHoja.ancho = cubetaAncho;
        objLibro[j+1].objHoja.titulo = cubetaTitulo;
        objLibro[j+1].objHoja.fuente = cubetaFuente;
      }
      showBookReverse();
    }
//Ordenamiento cuando la llave es el acnho
void bubleSortAncho(struct Libro objLibro[], int n){
      int i, j;
      float cubetaAlto,cubetaAncho;
      char *cubetaTitulo;
      char * cubetaFuente;
      for (i = 0; i < n-1; i++)
      	for (j = 0; j < n-i-1; j++)
      		if (objLibro[j].objHoja.ancho > objLibro[j+1].objHoja.ancho){

            cubetaAlto = objLibro[j].objHoja.alto;
            cubetaAncho = objLibro[j].objHoja.ancho;
            cubetaTitulo = objLibro[j].objHoja.titulo;
            cubetaFuente = objLibro[j].objHoja.fuente;
            objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
            objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
            objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
            objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
            objLibro[j+1].objHoja.alto = cubetaAlto;
            objLibro[j+1].objHoja.ancho = cubetaAncho;
            objLibro[j+1].objHoja.titulo = cubetaTitulo;
            objLibro[j+1].objHoja.fuente = cubetaFuente;
          }
          showBook();
      }
void bubleSortAnchoReverse(struct Libro objLibro[], int n){
    int i, j;
    float cubetaAlto,cubetaAncho;
    char *cubetaTitulo;
    char * cubetaFuente;
    for (i = 0; i < n-1; i++)
    	for (j = 0; j < n-i-1; j++)
        		if (objLibro[j].objHoja.ancho > objLibro[j+1].objHoja.ancho){
              cubetaAlto = objLibro[j].objHoja.alto;
              cubetaAncho = objLibro[j].objHoja.ancho;
              cubetaTitulo = objLibro[j].objHoja.titulo;
              cubetaFuente = objLibro[j].objHoja.fuente;
              objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
              objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
              objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
              objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
              objLibro[j+1].objHoja.alto = cubetaAlto;
              objLibro[j+1].objHoja.ancho = cubetaAncho;
              objLibro[j+1].objHoja.titulo = cubetaTitulo;
              objLibro[j+1].objHoja.fuente = cubetaFuente;
                }
                showBookReverse();
}
//Ordenamiento cuando la llave es el titulo
void bubleSortTitulo(struct Libro objLibro[], int n){
  int i, j;
  float cubetaAlto,cubetaAncho;
  char *cubetaTitulo;
  char * cubetaFuente;
  for (i = 0; i < n-1; i++)
  	for (j = 0; j < n-i-1; j++)
  		if (objLibro[j].objHoja.titulo[0] > objLibro[j+1].objHoja.titulo[0]){

        cubetaAlto = objLibro[j].objHoja.alto;
        cubetaAncho = objLibro[j].objHoja.ancho;
        cubetaTitulo = objLibro[j].objHoja.titulo;
        cubetaFuente = objLibro[j].objHoja.fuente;
        objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
        objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
        objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
        objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
        objLibro[j+1].objHoja.alto = cubetaAlto;
        objLibro[j+1].objHoja.ancho = cubetaAncho;
        objLibro[j+1].objHoja.titulo = cubetaTitulo;
        objLibro[j+1].objHoja.fuente = cubetaFuente;
      }
      showBook();
  }
void bubleSortTituloReverse(struct Libro objLibro[], int n){
  int i, j;
  float cubetaAlto,cubetaAncho;
  char *cubetaTitulo;
  char * cubetaFuente;
  for (i = 0; i < n-1; i++)
  	for (j = 0; j < n-i-1; j++)
  		if (objLibro[j].objHoja.titulo[0] > objLibro[j+1].objHoja.titulo[0]){
        cubetaAlto = objLibro[j].objHoja.alto;
        cubetaAncho = objLibro[j].objHoja.ancho;
        cubetaTitulo = objLibro[j].objHoja.titulo;
        cubetaFuente = objLibro[j].objHoja.fuente;
        objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
        objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
        objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
        objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
        objLibro[j+1].objHoja.alto = cubetaAlto;
        objLibro[j+1].objHoja.ancho = cubetaAncho;
        objLibro[j+1].objHoja.titulo = cubetaTitulo;
        objLibro[j+1].objHoja.fuente = cubetaFuente;
        }
        showBookReverse();
    }
//Ordenamiento cuando la llave es el fuente
void bubleSortFuente(struct Libro objLibro[], int n){
  int i, j;
  float cubetaAlto,cubetaAncho;
  char *cubetaTitulo;
  char * cubetaFuente;
  for (i = 0; i < n-1; i++)
  	for (j = 0; j < n-i-1; j++)
  		if (objLibro[j].objHoja.fuente[0] > objLibro[j+1].objHoja.fuente[0]){
        cubetaAlto = objLibro[j].objHoja.alto;
        cubetaAncho = objLibro[j].objHoja.ancho;
        cubetaTitulo = objLibro[j].objHoja.titulo;
        cubetaFuente = objLibro[j].objHoja.fuente;
        objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
        objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
        objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
        objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
        objLibro[j+1].objHoja.alto = cubetaAlto;
        objLibro[j+1].objHoja.ancho = cubetaAncho;
        objLibro[j+1].objHoja.titulo = cubetaTitulo;
        objLibro[j+1].objHoja.fuente = cubetaFuente;
      }
      showBook();
  }
void bubleSortFuenteReverse(struct Libro objLibro[], int n){
  int i, j;
  float cubetaAlto,cubetaAncho;
  char *cubetaTitulo;
  char * cubetaFuente;
    for (i = 0; i < n-1; i++)
    	for (j = 0; j < n-i-1; j++)
    		if (objLibro[j].objHoja.fuente[0] > objLibro[j+1].objHoja.fuente[0]){
          cubetaAlto = objLibro[j].objHoja.alto;
          cubetaAncho = objLibro[j].objHoja.ancho;
          cubetaTitulo = objLibro[j].objHoja.titulo;
          cubetaFuente = objLibro[j].objHoja.fuente;
          objLibro[j].objHoja.alto = objLibro[j+1].objHoja.alto;
          objLibro[j].objHoja.ancho = objLibro[j+1].objHoja.ancho;
          objLibro[j].objHoja.titulo = objLibro[j+1].objHoja.titulo;
          objLibro[j].objHoja.fuente = objLibro[j+1].objHoja.fuente;
          objLibro[j+1].objHoja.alto = cubetaAlto;
          objLibro[j+1].objHoja.ancho = cubetaAncho;
          objLibro[j+1].objHoja.titulo = cubetaTitulo;
          objLibro[j+1].objHoja.fuente = cubetaFuente;
        }
        showBookReverse();
    }
