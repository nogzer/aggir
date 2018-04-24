/*!
 * \file grille.hpp
 * \brief Déclaration des variables de l'algorithme AGGIR
 * \author Matthieu Nogatchewsky
 * \date Lundi 23 avril 2018
 */
#ifndef DEF_GRILLE
#define DEF_GRILLE


namespace Grille {

  enum Variables {
    COHERENCE,
    ORIENTATION,
    TOILETTE,
    HABILLAGE,
    ALIMENTATION,
    ELIMINATION,
    TRANSFERT,
    DEPLACEMENT_INT,
    DEPLACEMENT_EXT,
    COMMUNICATION
  };
  const int NOMBRE_VARIABLE = COMMUNICATION+1;

  enum Modalite {
    ModaliteA,
    ModaliteB,
    ModaliteC
  };
  const int NOMBRE_MODALITE = ModaliteC+1;

  enum Classe {
    ClasseA,
    ClasseB,
    ClasseC,
    ClasseD,
    ClasseE,
    ClasseF,
    ClasseG,
    ClasseH
  };
  const int NOMBRE_CLASSE = ClasseH+1;

  const int NOMBRE_RANG = 13;

  const int NOMBRE_GIR = 6;

  int* valeurs[NOMBRE_CLASSE][NOMBRE_MODALITE];
  int rangs[NOMBRE_RANG][2] = {{ClasseA,4380},
			       {ClasseA,4140},
			       {ClasseA,3390},
			       {ClasseB,2016},
			       {ClasseC,1700},
			       {ClasseC,1432},
			       {ClasseD,2400},
			       {ClasseE,1200},
			       {ClasseF,800},
			       {ClasseG,650},
			       {ClasseH,4000},
			       {ClasseH,2000},
			       {ClasseH,0}};
  int gir[NOMBRE_GIR] = {0, 6, 8, 10, 11, 12};

  void initialiserGrille(){

    for(int i = 0 ; i < NOMBRE_CLASSE ; i++){
      int colonne[NOMBRE_VARIABLE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      valeurs[i][ModaliteA] = colonne;
    }
    // Classe A
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 16, 16, 20, 16, 120, 32, 0, 0};
      valeurs[ClasseA][ModaliteB] = colonne;
    }
    {
      int colonne[NOMBRE_VARIABLE] = {2000, 1200, 40, 40, 60, 100, 800, 200, 0, 0};
      valeurs[ClasseA][ModaliteC] = colonne;
    }
    //Classe B
    {
      int colonne[NOMBRE_VARIABLE] = {320, 120, 16, 16, 0, 16, 120, -40, 0, 0};
      valeurs[ClasseB][ModaliteB] = colonne;
    }
    { 
      int colonne[NOMBRE_VARIABLE] = {1500, 1200, 40, 40, 60, 100, 800, -80, 0, 0};
      valeurs[ClasseB][ModaliteC] = colonne;
    }
    //Classe C
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 16, 16, 20, 20, 200, 40, 0, 0};
      valeurs[ClasseC][ModaliteB] = colonne;
    }
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 40, 40, 60, 160, 1000, 400, 0, 0};
      valeurs[ClasseC][ModaliteC] = colonne;
    }
    //Classe D
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 0, 0, 200, 200, 200, 0, 0, 0};
      valeurs[ClasseD][ModaliteB] = colonne;
    }
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 0, 0, 2000, 400, 2000, 200, 0, 0};
      valeurs[ClasseD][ModaliteC] = colonne;
    }
    //Classe E
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 100, 100, 100, 100, 100, 0, 0, 0};
      valeurs[ClasseE][ModaliteB] = colonne;
    }
    {
      int colonne[NOMBRE_VARIABLE] = {400, 400, 400, 400, 400, 800, 800, 200, 0, 0};
      valeurs[ClasseE][ModaliteC] = colonne;
    }
    //Classe F
    {
      int colonne[NOMBRE_VARIABLE] = {0, 100, 100, 100, 100, 100, 100, 0, 0, 0};
      valeurs[ClasseF][ModaliteB] = colonne;
    }
    {
      int colonne[NOMBRE_VARIABLE] = {200, 200, 500, 500, 500, 500, 500, 500, 200, 0};
      valeurs[ClasseF][ModaliteC] = colonne;
    }
    //Classe G
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 200, 200, 200, 200, 200, 100, 0, 0};
      valeurs[ClasseG][ModaliteB] = colonne;
    }
    {
      int colonne[NOMBRE_VARIABLE] = {150, 150, 300, 300, 500, 500, 400, 200, 0, 0
      };
      valeurs[ClasseG][ModaliteC] = colonne;
    }
    //Classe H
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 2000, 2000, 2000, 2000, 2000, 1000, 0, 0};
      valeurs[ClasseH][ModaliteB] = colonne;
    }
    {
      int colonne[NOMBRE_VARIABLE] = {0, 0, 3000, 3000, 3000, 3000, 1000, 1000, 0, 0};
      valeurs[ClasseH][ModaliteC] = colonne;
    }

    
  }

};

#endif
