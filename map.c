#include <stdio.h>

// Definieren Sie ein enum cardd
typedef enum {N=1, E, S, W} cardd;

// Definieren Sie ein 3x3-Array namens map, das Werte vom Typ cardd enthält
cardd map[3][3];

// Die Funktion set_dir soll an Position x, y den Wert dir in das Array map eintragen
// Überprüfen Sie x und y um mögliche Arrayüberläufe zu verhindern
// Überprüfen Sie außerdem dir auf Gültigkeit
void set_dir (int x, int y, cardd dir)
{
	if(x<3 && x>=0 && y<3 && y>=0 && dir >= 1 && dir <5)
	{
		map[x][y] = dir;
	}
	else
	{
		printf("Fehlerhafte Eingabe\n");
	}
}

// Die Funktion show_map soll das Array in Form einer 3x3-Matrix ausgeben
void show_map (void)
{
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf("%i ", map[i][j]);
		}
		printf("\n");
	}
}

char convertToCardinalpoint(int i)
{
	if(i==1)		{return 'N';}
	else if(i==2)	{return 'E';}
	else if(i==3)	{return 'S';}
	else if(i==4)	{return 'W';}
	else			{return ' ';}
}

int main (void)
{
	// In dieser Funktion darf nichts verändert werden!
	set_dir(0, 1, N);
	set_dir(1, 0, W);
	set_dir(1, 4, W);
	set_dir(1, 2, E);
	set_dir(2, 1, S);

	show_map();
/*
	set_dir(0, 0, N|W);
	set_dir(0, 2, N|E);
	set_dir(0, 2, N|S);
	set_dir(2, 0, S|W);
	set_dir(2, 2, S|E);
	set_dir(2, 2, E|W);

	show_map();
*/
	return 0;
}
