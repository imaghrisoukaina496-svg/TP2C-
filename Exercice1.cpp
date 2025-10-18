#include<iostream>
#include<string>
using namespace std;

class Etudiant
{
private:
    string nom;
    string cin;
    float note1;
    float note2;
    float note3;
public:

    void setNom(string n);
    void setCin(string c);
    void setNote1(float n1);
    void setNote2(float n2);
    void setNote3(float n3);

    string getNom();
    string getCin();
    float getNote1();
    float getNote2();
    float getNote3();

    float calculMoyenne();
    void afficher();
};

void Etudiant::setNom(string n)
{
    nom = n;
}

void Etudiant::setCin(string c)
{
    cin = c;
}

void Etudiant::setNote1(float n1)
{
    note1 = n1;
}

void Etudiant::setNote2(float n2)
{
    note2 = n2;
}

void Etudiant::setNote3(float n3)
{
    note3 = n3;
}

string Etudiant::getNom()
{
    return nom;
}

string Etudiant::getCin()
{
    return cin;
}

float Etudiant::getNote1()
{
    return note1;
}

float Etudiant::getNote2()
{
    return note2;
}

float Etudiant::getNote3()
{
    return note3;
}

float Etudiant::calculMoyenne()
{
    return (note1 + note2 + note3) / 3;
}

void Etudiant::afficher()
{
    cout << "Nom : " << nom << endl;
    cout << "CIN : " << cin << endl;
    cout << "Notes : " << note1 << " | " << note2 << " | " << note3 << endl;
    cout << "Moyenne : " << calculMoyenne() << endl;
}

int main(){
    Etudiant e;
    e.setNom("Lamia");
    e.setCin("AB123456");
    e.setNote1(14);
    e.setNote2(16);
    e.setNote3(18);

    e.afficher();

    return 0;
}