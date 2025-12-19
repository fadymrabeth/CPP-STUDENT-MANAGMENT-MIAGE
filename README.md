# CPP-STUDENT-MANAGMENT-MIAGE
Application C++ pour la gestion des étudiants (notes, moyennes, mentions, statistiques) développée dans le cadre d'un projet académique pour la 2e année de MIAGE.

Présentation du projet

Ce projet est une application développée en C++ dans le cadre de la formation *MIAGE (Méthodes Informatiques Appliquées à la Gestion des Entreprises)*.

L’objectif de cette application est de mettre en pratique les *bases du langage C++* à travers un cas concret de *gestion des étudiants* : saisie des informations, calculs de moyennes, attribution de mentions et statistiques de classe.



Objectifs pédagogiques

Ce projet permet de :
- Comprendre la *programmation structurée en C++*
- Utiliser des *tableaux* et des *structures (struct)*
- Manipuler des *fonctions*
- Appliquer les *boucles* et *conditions*
- Concevoir un *menu interactif*



Fonctionnalités de l’application

L’application permet de :

- Saisir les informations des étudiants (nom, prénom)
- Enregistrer les notes pour chaque matière
- Calculer automatiquement la moyenne générale
- Attribuer une mention selon la moyenne
- Rechercher un étudiant par nom et prénom
- Afficher des statistiques de classe :
  - moyenne générale
  - moyenne minimale
  - moyenne maximale



Structure générale du programme

Le code est organisé de manière logique et progressive :

1. Inclusion des bibliothèques
2. Déclaration des constantes
3. Définition des tableaux
4. Déclaration de la structure Etudiant
5. Définition des fonctions
6. Fonction principale main() avec menu interactif



Bibliothèque utilisée

```cpp
#include <iostream>
using namespace std;

	•	iostream permet l’utilisation de cin et cout
	•	cin est utilisé pour la saisie des données
	•	cout est utilisé pour l’affichage
	•	using namespace std simplifie l’écriture du code



Constantes

const int MAX_ETUDIANTS = 50;
const int NB_MATIERES = 8;

	•	MAX_ETUDIANTS définit le nombre maximum d’étudiants gérés
	•	NB_MATIERES définit le nombre de matières
	•	Les constantes améliorent la lisibilité et la sécurité du programme



Tableau des matières

string matieres[NB_MATIERES] = {
    "C++ Programming",
    "Advanced Structured Programming",
    "Conception Oriente Objet",
    "Probabilites et Statistiques",
    "Comptabilite Analytique",
    "Anglais",
    "Francais",
    "Competences Culturelles et Artistiques"
};

	•	Tableau de chaînes de caractères (string)
	•	Contient les matières du cursus MIAGE
	•	Utilisé pour afficher dynamiquement les noms des matières



Structure Etudiant

struct Etudiant {
    string nom;
    string prenom;
    float notes[NB_MATIERES];
};

	•	Regroupe toutes les informations d’un étudiant
	•	nom et prenom : informations textuelles
	•	notes : tableau des notes par matière



Tableau d’étudiants

Etudiant classe[MAX_ETUDIANTS];

	•	Tableau de structures
	•	Chaque élément représente un étudiant
	•	Permet de gérer l’ensemble de la classe



Calcul de la moyenne

float moyenneEtudiant(Etudiant e)

	•	Fonction qui calcule la moyenne d’un étudiant
	•	Parcourt le tableau des notes avec une boucle for
	•	Retourne une valeur de type float
	•	Fonction réutilisable dans le programme



Attribution des mentions

string mention(float moy)

	•	Utilise des conditions if / else
	•	Associe une mention à une moyenne donnée :
	•	≥ 16 : Très bien
	•	≥ 14 : Bien
	•	≥ 12 : Assez bien
	•	≥ 10 : Passable
	•	< 10 : Insuffisant



Saisie des étudiants

void saisirEtudiants(Etudiant t[], int n)

	•	Fonction dédiée à la saisie des données
	•	Utilise cin pour récupérer les informations
	•	Deux boucles for pour :
	•	parcourir les étudiants
	•	parcourir les matières



Statistiques de la classe

void statistiquesClasse(Etudiant t[], int n)

	•	Calcule :
	•	la moyenne générale de la classe
	•	la moyenne minimale
	•	la moyenne maximale
	•	Utilise la fonction moyenneEtudiant



Recherche d’un étudiant

void rechercherEtudiant(Etudiant t[], int n)

	•	Recherche par nom et prénom
	•	Parcourt le tableau des étudiants
	•	Affiche le bulletin si l’étudiant est trouvé



Menu principal

switch (choix)

	•	Menu interactif pour l’utilisateur
	•	Chaque case correspond à une fonctionnalité
	•	Intégré dans une boucle do while
	•	Permet de naviguer facilement dans l’application



Fonction main()

int main()

	•	Point d’entrée du programme
	•	Gère le menu et les choix de l’utilisateur
	•	Appelle les différentes fonctions
	•	Contrôle l’exécution globale

⸻

✅ Conclusion

Ce projet représente une application concrète des fondamentaux du langage C++ dans un contexte de gestion académique, conforme aux objectifs pédagogiques de la filière MIAGE.
