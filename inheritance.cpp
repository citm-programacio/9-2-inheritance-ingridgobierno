// inheritance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Building {
protected:
	string name;
public:
	Building(string _n) : name(_n) {}
	string getName() {
		return name;
	}
};

class Warehouse : Building {
private:
	int wood;
	int rocks;
	int wheat;
public:
	Warehouse(string n, int fusta, int rocas, int trigo) : Building(n), wood(fusta), rocks(rocas), wheat(trigo) {}
	void printResources() {
		cout << "Fusta que hi ha: " << wood << endl;
		cout << "Roques que hi ha: " << rocks << endl;
		cout << "Blat que hi ha: " << wheat << endl;
	}
};

class House : Building {
private:
	int floors;
	int inhabitants;
	int servants;
public:
	House(string n, int terra, int habitants, int sirvents) : Building(n), floors(terra), inhabitants(habitants), servants(sirvents) {}
	void printHouse() {
		cout << "Plantes de la casa: " << floors << endl;
		cout << "Habitants de la casa: " << inhabitants << endl;
		cout << "Servents de la casa: " << servants << endl;
	}
};

class Temple : Building {
private:
	string God;
	int priest;
public:
	Temple(string n, int cura, string deu) : Building(n), priest(cura), God(deu) {}
	void printTemple() {
		cout << "La deesa del temple es diu: " << God << "." << endl;
		cout << "En aquest temple hi ha " << priest << " cures." << endl;
	}
};


int main()
{
	Building m("MAGATZEM");
	Warehouse w(m.getName(), 1, 2, 3);
	cout << m.getName() << endl;
	w.printResources();
	cout << endl;

	Building c("CASA");
	House h(c.getName(), 3, 2, 3);
	cout << c.getName() << endl;
	h.printHouse();
	cout << endl;

	Building t("TEMPLE");
	Temple g(t.getName(), 3, "Ingrid");
	cout << t.getName() << endl;
	g.printTemple();
	cout << endl;

}

