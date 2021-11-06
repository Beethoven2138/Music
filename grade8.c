/*Randomised selection of the ABRSM grade 8  piano scales and arpeggios syllabus*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char* keys[12] = {"C major","C minor melodic", "C minor harmonic", "A major", "A minor melodic", "A minor harmonic", "E-flat major", "E-flat minor melodic", "E-flat minor harmonic", "F-sharp major", "F-sharp minor melodic", "F-sharp minor harmonic"};
char* arp[8] = {"C major","C minor", "A major", "A minor", "E-flat major", "E-flat minor", "F-sharp major", "F-sharp minor"};
char* type[2] = {"legato", "staccato"};
char* whole[2] = {"C", "E-flat"};
char* hand[2] = {"left-hand", "right-hand"};
char* dom[4] = {"C", "E-flat", "A", "F-sharp"};

int main(void)
{
	srand(time(NULL));
	int r = rand();
	int s = rand();
	int t = rand();
	switch (r % 10)
	{
	case 0:
	{
		printf("%s similar motion %s\n", keys[s%12], type[t%2]);
		break;
	};
	case 1:
	{
		printf("%s contrary motion %s\n", keys[s%12], type[t%2]);
		break;
	};
	case 2:
	{
		printf("%s sixth apart %s\n", keys[s%12], type[t%2]);
		break;
	};
	case 3:
	{
		printf("E-flat major thirds legato %s\n", hand[s%2]);
		break;
	};
	case 4:
	{
		printf("C major sixth apart staccato %s\n", hand[s%2]);
		break;
	};
	case 5:
	{
		printf("C and E-flat chromatic sixth apart %s\n", type[s%2]);
		break;
	};
	case 6:
	{
		printf("%s whole-tone %s\n", whole[s%2], type[s%2]);
		break;
	};
	case 7:
	{
		printf("%s arpeggio second inversion\n", arp[s%8]);
		break;
	};
	case 8:
	{
		printf("dominant seventh in %s\n", dom[s%4]);
		break;
	};
	case 9:
	{
		printf("%s diminished seventh\n", whole[s%2]);
		break;
	};
	}
	return 0;
}
