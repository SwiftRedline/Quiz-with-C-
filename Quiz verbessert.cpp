#include "stdafx.h"

// Variablen:
string Name;
int Thema;
int AW;
int PTS = 0;
int Eg;
float Prozentzahl;
string Entscheidung;
string Eingabe;

//Anfang der FragenA() Funktion für die Allgemeinwissen() Funktion

void FragenA()
{
	cout << "TEst du faggot";
	cin >> Entscheidung;
}

//Ende der FragenA() Funktion

//Anfang von der Allgemeinwissen() Funktion

void Allgemeinwissen()
{
	cout << "Sie haben sich fuer das Thema Allgemeinwissen entschieden. Viel Glueck!" << endl;
	cout << Name << " bist du bereit?" << endl;
	cin >> Entscheidung;

	//Weiterleitung zu den FragenA()
	if (Entscheidung == "Ja")
	{
		FragenA();
	}
	if (Entscheidung == "JA")
	{
		FragenA();
	}
	if (Entscheidung == "ja")
	{
		FragenA();
	}
	if (Entscheidung == "Nein")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "NEIN")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "nein")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "Ne")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "ne")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "Nö")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "nö")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
}
//Ende der Allgemeinwissen() Funktion

//Anfang der Fragen für Mathematik()

void FragenM()
{
	cout << "Test" << endl;
	cin >> AW;
	
	
}

//Mathematik() Funktion anfang

void Mathematik()
{
	cout << "Sie haben sich für das Thema Mathematik entschieden. Viel Spaß :)" << endl;
	cout << Name << " bist du bereit?" << endl;
	cin >> Entscheidung;

	// Weiterleitung zu der Frage Funktion
	if (Entscheidung == "Ja")
	{
		FragenM();
	}
	if (Entscheidung == "ja")
	{
		FragenM();
	}
	if (Entscheidung == "JA")
	{
		FragenM();
	}
	if (Entscheidung == "Nein")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "NEIN")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "nein")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "Ne")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "ne")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "Nö")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "nö")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
}
//Ende der Mathematik Funktion

// Anfang der Fragen für Computing()

void FragenC()
{
	// Frage 1:
	cout << "\n Frage 1(5 Punkte): Was versteht man unter Hardware? " << endl;
	cout << "1. Programme auf einem Computer" << endl;
	cout << "2. Bestandteile eines Computers" << endl;
	cout << "3. Ein spezieller Techniker" << endl;
	cin >> AW;
	if (AW == 2)
	{
		PTS += 5;
		cout << "Richtig" << endl;
	}
	else
	{
		cout << "Falsch!" << endl;
	}
	
	//Frage 2:
	cout << "\n Frage 2(10 Punkte): Was bedeutet die Abkuerzung IT?" << endl;
	cout << "Gross- und Kleinschreibung bitte beachten, sonst ist es nicht richtig!" << endl;
	cin >> Eingabe;

	if (Eingabe == "Informationstechnologe")
	{
		cout << "Richtig!" << endl;
		PTS += 10;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}
	if (Eingabe == "informationstechnologe")
	{
		cout << "Richtig!" << endl;
		PTS += 10;
	}
	if (Eingabe == "Informationstechnologin")
	{
		cout << "Richtig!" << endl;
		PTS += 10;
	}
	if (Eingabe == "informationstechnologin")
	{
		cout << "Richtig!" << endl;
		PTS += 10;
	}

	// Frage 3:
	cout << "\n Frage 3(10 Punkte): Was bedeutet WWW?" << endl;
	cout << "1. World Wide Web" << endl;
	cout << "2. Wide Web World" << endl;
	cout << "3. Welt weites Netz" << endl;
	cin >> AW;

	if (AW == 1)
	{
		cout << "Richtig!" << endl;
		PTS += 10;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	//Frage 4:
	cout << "\n Frage 4(15 Punkte): Wie sieht eine IPv6 Adresse aus?" << endl;
	cout << "1. 102.1.32.125" << endl;
	cout << "2. 2001:db8:0:8d3:0:8a2e:70:734" << endl;
	cout << "3. #FFF0000" << endl;
	cin >> AW;

	if (AW == 2)
	{
		cout << "Richtig!" << endl;
		PTS += 15;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	//Frage 5:
	cout << "\n Frage 5(10 Punkte): Wie werden die IPv6 Adressen notiert?" << endl;
	cout << "1. dezimal" << endl;
	cout << "2. hexadezimal" << endl;
	cout << "3. Oktal" << endl;
	cout << "4. Binär" << endl;
	cin >> AW;

	if (AW == 2)
	{
		cout << "Richtig!" << endl;
		PTS += 10;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	//Frage 6:
	cout << "\n Frage 6(20 Punkte): Rechne um in Dezimal: 10101011" << endl;
	cin >> AW;

	if (AW == 171)
	{
		cout << "Richtig!" << endl;
		PTS += 20;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	//Frage 7:
	cout << "\n Frage 7(10 Punkte): Was ist eine Firewall?" << endl;
	cout << "1. Eine Mauer" << endl;
	cout << "2. Eine 'Brandschutzmauer' im Internet" << endl;
	cin >> AW;

	if (AW == 2)
	{
		cout << "Richtig!" << endl;
		PTS += 10;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	//Frage 8:
	cout << "\n Frage 8(15 Punkte): Was ist ein Trojaner?" << endl;
	cout << "1. Ein Pferd" << endl;
	cout << "2. Ein Computervirus" << endl;
	cin >> AW;

	if (AW == 2)
	{
		cout << "Richtig!" << endl;
		PTS += 15;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	//Frage 9 :
	cout << "\n Frage 9(10 Punkte): Was ist ein Betriebssystem?" << endl;
	cout << "1. Eine Hardware" << endl;
	cout << "2. Der Arbeitsspeicher" << endl;
	cout << "3. Eine Software" << endl;
	cin >> AW;

	if (AW == 3)
	{
		cout << "Richtig!" << endl;
		PTS += 10;

	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	//Frage 10:
	cout << "\n Frage 10(30 Punkte): Welche Technologie wird benötigt, damit man 2 Standorte(jeweils 1km entfernt) verbinden kann?" << endl;
	cout << "1. VLAN" << endl;
	cout << "2. GAN" << endl;
	cout << "3. LAN" << endl;
	cout << "4. WAN" << endl;
	cin >> AW;

	if (AW == 4)
	{
		cout << "Richtig!" << endl;
		PTS += 30;
	}
	else
	{
		cout << "Falsch, keine Punkte!" << endl;
	}

	cout << "\n Deine Gesamtpunkte: " << PTS << endl;

	if (PTS >= 95)
	{
		cout << "Du hast die Pruefung mit " << PTS << " Punkten bestanden!" << endl;
		cout << "Glueckwunsch! \n" << endl;
	}
	else
	{
		cout << "Du hast die Pruefung leider nicht mit " << PTS << " Punkten bestanden!" << endl;
		cout << "Aber Uebung macht den Meister! ;)\n" << endl;
	}
	cout << "Wenn dir das Quiz gefallen hat kannst du gerne den Entwickler ein Feedback geben :)" << endl;
	cout << "Du kannst auch gerne die weiteren Themen durcharbeiten! Frohes gelingen noch!" << endl;
}

//Computing() Funktion Anfang

void Computing()
{

	cout << "Sie haben sich fuer das Thema Computing entschieden! Gute Wahl ;=)" << endl;
	cout << Name << " bist du bereit?" << endl;
	cin >> Entscheidung;

	//Weiterleitung zu den Computing Fragen

	if (Entscheidung == "Ja")
	{
		FragenC();
	}
	if (Entscheidung == "ja")
	{
		FragenC();
	}
	if (Entscheidung == "JA")
	{
		FragenC();
	}
	if (Entscheidung == "Nein")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "NEIN")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "nein")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "Ne")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "ne")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "Nö")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
	if (Entscheidung == "nö")
	{
		cout << "Fuer ein anderes Thema bitte Quiz neustarten!" << endl;
	}
}

//Ende der Computing Funktion

//Anfang der main Funktion

int main()
{
	cout << "Hallo, wie ist dein Name? " << endl;
	cin >> Name;
	
	cout << "Willkommen zum Quiz " << Name << "!" << endl;
	cout << "Bitte waehle ein Thema aus, welches du durcharbeiten moechtest: \n" << endl;
	cout << "1. Allgemeinwissen" << endl;
	cout << "2. Computing" << endl;
	cout << "3. Mathematik \n" << endl;
	
	cin >> Thema;

	// Funktionen für die Quiz Auswahl | Weiterleitung zu den Quizes
	if (Thema == 1)
	{
		Allgemeinwissen();
	}
	if (Thema == 2)
	{
		Computing();
	}
	if (Thema == 3)
	{
		Mathematik();
	}

	//Damit das Konsolenfenster offen bleibt, bis man eine Taste drückt:
	system("PAUSE");
}

