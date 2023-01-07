#include <stdio.h>
#include <math.h>

	int day=printf("введите день,");
	int month=printf("месяц и ");
    float yr=printf("год рождения в формате - ДД ММ ГГГГ ");
    int animal;


void year(void){scanf("%f", &yr);

	if ((fmod(yr,4.0) == 0)||(fmod(yr,100.0)!= 0) && (fmod(yr,400.0) == 0))
	{printf("родились в високосный ");}
	else{printf("родились в НЕ високосный ");}}

void animal_who(void) {

	animal=fmod(yr,12);
	//printf("ponedelnik= %i",animal);
	switch(animal) {
		case 1: {printf("год петуха");}break;
		case 2:{printf("год собаки");}break;
		case 3:{printf("год свиньи(кабана)");}break;
		case 4:{printf("год крысы");}break;
		case 5:{printf("год быка");}break;
		case 6:{printf("год тигра");}break;
		case 7:{printf("год кролика");}break;
		case 8:{printf("год дракона");}break;
		case 9:{printf("год змеи");}break;
		case 10:{printf("год лошади");}break;
		case 11:{printf("год козы");}break;
		case 0:{printf("год обезьяны");}break;
		//default:{printf("ERROR");}
		}
		}



int zodiak(void) {
	scanf("%i", &day);
	scanf("%d", &month);

	if ((day > 31) && (month != 2)) { printf("Ошибка, попробуйте еще раз"); }
	else
		switch (month) {
			case 1: {
				if (day >= 20)printf("вы водолей, ");
				else { printf("вы козерог, "); }
			}
				break;
			case 2: {
				if (day > 28)printf("в феврале 28 дней");
				else {
					if (day < 19)printf("вы водолей, ");
					else printf("вы рыбы, ");
				}
			}
				break;
			case 3: {
				if (day < 21) printf("вы рыбы," ); else printf("вы овен, ");
			}
				break;
			case 4: {
				if (day < 20)printf("вы овен, "); else printf("вы телец, " );
			}
				break;
			case 5: {
				if (day < 21)printf("вы телец, "); else printf("вы близнецы, ");
			}
				break;
			case 6: {
				if (day < 22)printf("вы близнецы, "); else printf("вы рак, ");
			}
				break;
			case 7: {
				if (day < 23)printf("вы рак, "); else printf("вы лев, ");
			}
				break;
			case 8: {
				if (day < 22)printf("вы лев, "); else printf("вы дева, ");
			}
				break;
			case 9: {
				if (day < 23)printf("вы дева, "); else printf("вы весы, ");
			}
				break;
			case 10: {
				if (day < 24)printf("вы весы, "); else printf("вы скорпион, ");
			}
				break;
			case 11: {
				if (day < 23)printf("вы скорпион, "); else printf("вы стрелец, ");
			}
				break;
			case 12: {
				if (day < 22)printf("вы стрелец, "); else printf("вы козерог, ");
			}
				break;
			case 0: {

			}
				break;
			default: {
				printf("такого месяца нет!");}}}



int main(void){zodiak();year();animal_who();

return 0;}

