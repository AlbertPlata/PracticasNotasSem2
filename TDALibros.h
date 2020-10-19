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

struct Libro objLibro[]={{8.5,1.18,"El avestruz", "Arial"},
                         {8.5,0.74,"La niña", "Tahoma"},
                         {6.5,1.78,"El cuento", "Calibri"},
                         {5.5, 1.86,"Anécdota de un día", "Tahoma Black"},
                         {4.5,0.58,"Cien años y uno mas","Abscissa"},

                         {3.5,1.02,"Fiestas","Alanis hand"},
                         {2.5,1.46,"Significado de la vida", "Times"},
                         {1.5,1.9,"Metafisica","Modern"},
                         {0.5,2.34,"Trasatlantico","Sweet Pea"},
                         {0.5,2.78,"Viajando ando","Dotum"},

                         {1.5,3.22,"Trotamundos","Ebrima"},
                         {2.5,3.66,"Zapato viejo","French script"},
                         {3.5,4.1,"Yardas","Georgia"},
                         {4.5,4.54,"Diamantes y dados","HP Simplified"},
                         {5.5,4.98,"Elefantes","Impact"},

                         {6.5,5.42,"Gatoman","Jasmine UPC"},
                         {7.5,5.86,"Italia el nuevo mundo","Kaiti"},
                         {8.5,6.3,"Hipopotamos en su habitat","Latha"},
                         {9.5,6.74,"Juanacatlan, pueblo magico","Nyala"},
                         {10.5,7.18,"Poblaciones vulnerables","OCRB"},

                         {11.5,7.62,"Robin Hood","Perpetua"},
                         {12.5,8.06,"Pato Hood","Ravie"},
                         {13.5,8.5,"Quo duo","Selawik"},
                         {14.5,8.94,"Nuevos horizontes","Univers"},
                         {15.5,9.38,"Kids, where are them?","Verdana"},

                         {16.5,9.82,"Soberanos","Webdings"},
                         {17.5,10.26,"Osos polares", "Yu Gothic"},
                         {18.5,10.7,"Trasportes en el futuro","Bell MT"},
                         {19.5,11.14,"Uvas para el vino","Mangal"},
                         {20.5,11.58,"Walter Cross ¿Quien fue?","Papyrus"},

                         {21.5,12.02,"Xcaret, un lugar magico","Arial Black"},
                         {22.5,12.46,"Burros Blancos","Agency"},
                         {23.5,12.9,"Verduras y frutas","Cambria"}
                       };
