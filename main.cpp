#include <iostream>
using namespace std;

const int MAX_ETUDIANTS = 50;
const int NB_MATIERES = 8;

// Matières basées sur l'emploi du temps MIAGE
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

struct Etudiant {
    string nom;
    string prenom;
    float notes[NB_MATIERES];
};

// Calcul de la moyenne d’un étudiant
float moyenneEtudiant(Etudiant e) {
    float somme = 0;
    for (int i = 0; i < NB_MATIERES; i++) {
        somme += e.notes[i];
    }
    return somme / NB_MATIERES;
}

// Mention
string mention(float moy) {
    if (moy >= 16) return "Tres bien";
    else if (moy >= 14) return "Bien";
    else if (moy >= 12) return "Assez bien";
    else if (moy >= 10) return "Passable";
    else return "Insuffisant";
}

// Saisie des étudiants
void saisirEtudiants(Etudiant t[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEtudiant " << i + 1 << endl;
        cout << "Nom : ";
        cin >> t[i].nom;
        cout << "Prenom : ";
        cin >> t[i].prenom;

        for (int j = 0; j < NB_MATIERES; j++) {
            cout << "Note en " << matieres[j] << " : ";
            cin >> t[i].notes[j];
        }
    }
}

// Statistiques de la classe
void statistiquesClasse(Etudiant t[], int n) {
    float somme = 0;
    float min = moyenneEtudiant(t[0]);
    float max = moyenneEtudiant(t[0]);

    for (int i = 0; i < n; i++) {
        float moy = moyenneEtudiant(t[i]);
        somme += moy;
        if (moy < min) min = moy;
        if (moy > max) max = moy;
    }

    cout << "\n--- Statistiques de la classe ---" << endl;
    cout << "Moyenne de la classe : " << somme / n << endl;
    cout << "Moyenne minimale : " << min << endl;
    cout << "Moyenne maximale : " << max << endl;
}

// Bulletin d’un étudiant
void bulletin(Etudiant e) {
    float moy = moyenneEtudiant(e);

    cout << "\n----- BULLETIN DE NOTES -----" << endl;
    cout << "Nom : " << e.nom << endl;
    cout << "Prenom : " << e.prenom << endl;

    for (int i = 0; i < NB_MATIERES; i++) {
        cout << matieres[i] << " : " << e.notes[i] << endl;
    }

    cout << "Moyenne generale : " << moy << endl;
    cout << "Mention : " << mention(moy) << endl;
}

// Recherche d’un étudiant
void rechercherEtudiant(Etudiant t[], int n) {
    string nom, prenom;
    cout << "Nom a rechercher : ";
    cin >> nom;
    cout << "Prenom a rechercher : ";
    cin >> prenom;

    for (int i = 0; i < n; i++) {
        if (t[i].nom == nom && t[i].prenom == prenom) {
            bulletin(t[i]);
            return;
        }
    }
    cout << "Etudiant non trouve !" << endl;
}

int main() {
    Etudiant classe[MAX_ETUDIANTS];
    int n = 0;
    int choix;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Saisir les etudiants" << endl;
        cout << "2. Statistiques de la classe" << endl;
        cout << "3. Rechercher un etudiant" << endl;
        cout << "4. Quitter" << endl;
        cout << "Choix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            cout << "Nombre d'etudiants : ";
            cin >> n;
            saisirEtudiants(classe, n);
            break;

        case 2:
            statistiquesClasse(classe, n);
            break;

        case 3:
            rechercherEtudiant(classe, n);
            break;

        case 4:
            cout << "Fin du programme." << endl;
            break;

        default:
            cout << "Choix incorrect !" << endl;
        }

    } while (choix != 4);

    return 0;
}
