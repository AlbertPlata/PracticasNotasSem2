struct hoja{
  float alto;
  float ancho;
  char* titulo;
  char* fuente;
};

struct Libro{
  struct hoja objHoja;
};

//Catalogo
//struct Libro catalogo [33];

struct Libro objLibro[]={{8.5,1.18,"El avestrus", "Arial"},
                         {8.5,0.74,"La niña", "Tahoma"},
                         {6.5,1.78,"El cuento", "Calibri"},
                         {5.5, 1.86,"Anécdota de un día", "Tahoma Black"},
                         {4.5,0.58,"Cien años y uno mas","Abscissa"}/*,
                         {,,,},
                         {,,,},
                         {,,,},
                         {,,,},
                         {,,,},
                         {},
                         {},
                         {},

                         {},
                         {},
                         {},
                         {},
                         {},
                         {},
                         {},
                         {},
                         {},
                         {},*/
                       };
