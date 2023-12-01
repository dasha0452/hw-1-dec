#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#define M_PI 3.14159
#include <stdlib.h>
#include<time.h>

//for task 1

double ploshad(double b1, double b2, double h) {
	return ((b1 + b2) / 2) * h;
}													//for task 1

//for task 2

double ploshad2(double r) {
	return (M_PI * pow(r, 2));
}
double lenght(double r) {
	return (M_PI * 2 * r);
}													//for task 2					
//for task 3

double ploshad3(double a, double b) {
	return (a * b) / 2;
}

int calculateSum(int a, int b, int c, int d) {
	return (a + b + c + d);
}													//for task 4

double hypotenuse(double a, double b) {
	return sqrt(pow(a, 2) + pow(b, 2));
}													//for task 3

//for task 5 

double polyarnye_r(double x, double y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}
double polyarnye_angle(double x, double y) {
	return atan2(y, x);
}													//for task 5 

//for task 6

double koordinata_x(double r, double theta) {
	return r * cos(theta);
}
double koordinata_y(double r, double theta) {
	return r * sin(theta);
}													//for task 6

//for task 7

double calculateDiskriminant(double b, double a, double c) {
	return (pow(b, 2) - 4 * a * c);
}
double perviy_koren(double b, double diskr, double a) {
	return (-b + sqrt(diskr)) / (2 * a);
}
double vtoroy_koren(double b, double diskr, double a) {
	return (-b - sqrt(diskr)) / (2 * a);
}
double calculate_x12(double b, double a) {
	return (-b / (2 * a));
}														//for task 7
//for task 8

double calculateMediany(double a, double c, double b) {
	return ((sqrt(2 * (pow(a, 2) + pow(c, 2)) - pow(b, 2)) / 2));
}														//for task 8

//for task 9

double minut1(double a) {
	return(a / 60);
}
double chasov(double a) {
	return (a / 3600);
}
double minut(double a) {
	return ((a - (a / 3600) * 3600) / 60);
}
//for task 11

double calculateDiscount(double a) {
	return (a * 0.9);
}

//for task 13

int generateRandomNumber() {
	return rand() % 9 + 1;
}

//for task 14

double stoimost(double a) {
	return (a * 0.8);
}
//for task 16
int pervoe(int a) {
	return (a / 100000);
}
int vtoroe(int a) {
	return (a / 10000 % 10);
}
int tretye(int a) {
	return (a / 1000 % 10);
}
int chetvertoe(int a) {
	return (a / 100 % 10);
}
int pyatoe(int a) {
	return (a / 10 % 10);
}
int shestoe(int a) {
	return (a % 10);
}
//for task 17

int poslednyaa(int a) {
	return (a % 10);
}
int dveposlednih(int a) {
	return (a % 100);
}

//for task 18

int pervayacifra(int a) {
	return (a / 1000);
}
int vtorayacifra(int a) {
	return (a / 100 % 10);
}
int tretyacifra(int a) {
	return(a / 10 % 10);
}
int chetvertayacifra(int a) {
	return(a % 10);
}


//for task 19

int pervayacifraaa(int a) {
	return (a / 100);
}
int vtorayacifraaa(int a) {
	return (a / 10 % 10);
}
int tretyacifraaa(int a) {
	return(a % 10);
}



int main() {
	/* task 1 */

	double b1, b2, h = 0;
	std::cout << "enter b1" << std::endl;
	std::cin >> b1;
	std::cout << "enter b2" << std::endl;
	std::cin >> b2;
	std::cout << "enter h" << std::endl;
	std::cin >> h;

	double trap = ploshad(b1, b2, h);
	std::cout << "area is " << trap << std::endl;  //вывод площади трапеции

	/* task 2 */

	double radius = 0;
	std::cout << "enter radius " << std::endl;
	std::cin >> radius;
	double krug1 = ploshad2(radius);
	double krug2 = lenght(radius);
	std::cout << "circle area is " << krug1 << std::endl;		//вывод площади круга
	std::cout << "circle lenght is " << krug2 << std::endl;		//вывод длины круга



	/* task 3 */

	double a, b = 0;
	std::cout << "enter a " << std::endl;
	std::cin >> a;
	std::cout << "enter b " << std::endl;
	std::cin >> b;
	double triangle = ploshad3(a, b);
	std::cout << "triangle area is " << triangle << std::endl;		//вывод площади треугольника
	double hypo = hypotenuse(a, b);
	std::cout << "hypotenuse is " << hypo << std::endl;				//вывод гипотенузы треугольника

	/* task 4 */
	int chislo = 0;
	std::cout << "enter chislo " << std::endl;
	std::cin >> chislo;
	int first_digit = chislo / 1000;  //первое число
	std::cout << first_digit << std::endl;   //второе число
	int second_digit = chislo / 100 % 10;    //третье число
	std::cout << second_digit << std::endl;    //четвЄртое число
	int third_digit = chislo / 10 % 10;			
	std::cout << third_digit << std::endl;		
	int fourth_digit = chislo % 10;
	std::cout << fourth_digit << std::endl;
	int sum = calculateSum(first_digit, second_digit, third_digit, fourth_digit);
	std::cout << "sum is " << sum << std::endl;			//вывод суммы

	/* task 5 */
	double x1 = 0;
	double y1 = 0;
	std::cout << "enter x" << x1 << std::endl;
	std::cin >> x1;
	std::cout << "enter y" << y1 << std::endl;
	std::cin >> y1;
	double rad = 0;
	rad = polyarnye_r(x1, y1);
	double angle = 0;
	angle = polyarnye_angle(x1, y1);
	std::cout << "ugol v polyarnyh koordinatax raven " << angle << std::endl;  //перевод из декартовых координат в пол€рные
	std::cout << "radius v polyarnyh koordinatax raven " << rad << std::endl;

	/* task 6 */
	double pol_rad = 0;
	double pol_angle = 0;
	std::cout << "enter radius" << pol_rad << std::endl;
	std::cin >> pol_rad;
	std::cout << "enter angle " << pol_angle << std::endl;
	std::cin >> pol_angle;
	double x2 = 0;
	double y2 = 0;
	x2 = koordinata_x(pol_rad, pol_angle);
	y2 = koordinata_y(pol_rad, pol_angle);
	std::cout << "pervaya koordinata ravna " << x2 << std::endl;   //переход от пол€рных координат к декартовым
	std::cout << "vnoraya koordinata ravna " << y2 << std::endl;

	/* task 7*/
	double a_koeff = 0;
	double b_koeff = 0;
	double c_koeff = 0;
	std::cout << "enter a" << a_koeff << std::endl;
	std::cin >> a_koeff;
	std::cout << "enter b" << b_koeff << std::endl;
	std::cin >> b_koeff;
	std::cout << "enter c" << c_koeff << std::endl;
	std::cin >> c_koeff;
	double diskr = calculateDiskriminant(b_koeff, a_koeff, c_koeff);
	double x1_urav = 0;
	double x2_urav = 0;
	if (diskr > 0) {
		x1_urav = perviy_koren(b_koeff, diskr, a_koeff);
		x2_urav = vtoroy_koren(b_koeff, diskr, a_koeff);

		std::cout << "perviy coren " << x1_urav << std::endl;       //случай, когда оба корн€ существуют
		std::cout << "vtoroy coren " << x2_urav << std::endl;

	}
	else if (diskr == 0) {
		x1_urav = x2_urav;
		x2_urav = calculate_x12(b_koeff, a_koeff);
		std::cout << "oba cornya ravny " << x2_urav << std::endl;    //случай, когда оба корн€ равны
	}

	else {
		std::cout << "net korney" << std::endl;						//дискриминант меньше нул€

	}

	/* task 8 */

	double a_triangle = 0;
	double b_triangle = 0;
	double c_triangle = 0;
	double mb = 0;
	std::cout << "enter a" << a_triangle << std::endl;
	std::cin >> a_triangle;
	std::cout << "enter b" << b_triangle << std::endl;
	std::cin >> b_triangle;
	std::cout << "enter c" << c_triangle << std::endl;
	std::cin >> c_triangle;
	mb = calculateMediany(a_triangle, c_triangle, b_triangle);
	std::cout << "mediana k storone b " << mb << std::endl;    //медиана к стороне b
	double ma = 0;
	ma = calculateMediany(b_triangle, c_triangle, a_triangle);
	std::cout << "mediana k storone a " << ma << std::endl;    //медиана к стороне а
	double mc = calculateMediany(a_triangle, b_triangle, c_triangle);
	std::cout << "mediana k storone c " << mc << std::endl;     //медиана к стороне с

	/* task 9 */
	double k = 0;
	int hours = 0;
	double min = 0;
	std::cout << "enter k " << std::endl;
	std::cin >> k;
	if (k >= 0 && k < 3600) {
		int vremya1 = minut1(k);
		std::cout << "proshlo 0 chasov i " << vremya1 << " minut(y) s nachala sutok" << std::endl;  //если прошло менее 1 часа
	}
	else if (k >= 3600 && k <= 86400) {
		int chas = chasov(k);
		int min = minut(k);
		std::cout << "proshlo " << chas << " chasov" << " i " << min << " minut(y) s nachala sutok" << std::endl;   //если прошло более 1 часа

	}

	/* task 10 */
	double g = 0;
	double hh = 0;
	double j = 0;
	std::cout << "enter g " << std::endl;
	std::cin >> g;
	std::cout << "enter h " << std::endl;
	std::cin >> hh;
	std::cout << "enter j " << std::endl;
	std::cin >> j;
	if ((hh + j > g) && (g + j > hh) && (g + hh > j)) {
		std::cout << "triangle is real" << std::endl;     //провер€ем, существует ли треугольник
	}
	else {
		std::cout << "triangle is not real" << std::endl;
	}
	if ((g == hh) || (g == j) || (hh == j)) {
		std::cout << "treugolnik ravnostoronniy" << std::endl;  //если треугольник равносторонний
	}

	else {
		std::cout << "treugolnik ne ravnostoronniy" << std::endl;

	}
	/* task 11 */

	double summa_nachalnaya = 0;
	std::cout << "enter summa " << std::endl;
	std::cin >> summa_nachalnaya;
	double stoimost_pokupki;
	if (summa_nachalnaya > 1000) {
		stoimost_pokupki = calculateDiscount(summa_nachalnaya);
		std::cout << "stoimost pokupri s uchetom skidki ravna " << stoimost_pokupki << std::endl;  //с учЄтом скидки в 10%
	}
	else {
		std::cout << "stoimost pokupri ravna " << summa_nachalnaya << std::endl;
	}

	/* task 12 */
	double height = 0;
	double weight = 0;
	std::cout << "enter height " << std::endl;
	std::cin >> height;
	std::cout << "enter weight " << std::endl;
	std::cin >> weight;
	if (weight > height - 100) {
		std::cout << "you should lose weight" << std::endl; //рекомендаци€ по похудению
	}
	else if (weight < height - 100) {
		std::cout << "you should gain weight" << std::endl;   //рекомендаци€ по набору веса
	}
	else {
		std::cout << "your weight is fine" << std::endl;
	}

	/* task 13 */

	int q = 0;
	int w = 0;
	q = generateRandomNumber();
	w = generateRandomNumber();
	std::cout << "pervoe chislo ravno " << q << std::endl;
	std::cout << "vtoroe chislo ravno " << w << std::endl;
	int result_umnozh = 0;
	std::cout << "enter resultat umnozheniya " << std::endl;
	std::cin >> result_umnozh;
	if (result_umnozh == q * w) {
		std::cout << "correct answer" << std::endl;   //если введЄнный результат умножени€ совпадает с результатом умножени€ рандомных чисел
	}
	else {
		std::cout << "wrong answer" << std::endl;
	}

	/* task 14 */
	double stoimost_peregovorov = 0;
	int den_nedeli = 0;
	double prodolzhitrlnost = 0;
	std::cout << "enter stoimost peregovorov " << std::endl;
	std::cin >> stoimost_peregovorov;
	std::cout << "enter den nedeli " << std::endl;
	std::cin >> den_nedeli;
	std::cout << "enter prodolzhitelnost " << std::endl;
	std::cin >> prodolzhitrlnost;
	if ((den_nedeli == 6) || (den_nedeli == 7)) {
		stoimost_peregovorov = stoimost(stoimost_peregovorov);
		std::cout << "stoimost peregovorov prodolzhitelnostyu " << prodolzhitrlnost << " minut " << " " << "po vihodnym = " << stoimost_peregovorov << std::endl;
	}
	else {
		std::cout << "stoimost peregovorov prodolzhitelnostyu " << prodolzhitrlnost << " minut " << " " << stoimost_peregovorov << std::endl;
	}

	/* task 15 */
	int monthNumber;

	std::cout << "enter month number [1, 12] ";
	std::cin >> monthNumber;
	std::string monthName;
	std::string season;

	switch (monthNumber) {
	case 1:
		monthName = "January";
		season = "winter";
		break;
	case 2:
		monthName = "February";
		season = "winter";
		break;
	case 3:
		monthName = "March";
		season = "spring";
		break;
	case 4:
		monthName = "April";
		season = "spring";
		break;
	case 5:
		monthName = "May";
		season = "spring";
		break;
	case 6:
		monthName = "June";
		season = "summer";
		break;
	case 7:
		monthName = "July";
		season = "summer";
		break;
	case 8:
		monthName = "august";
		season = "summer";
		break;
	case 9:
		monthName = "September";
		season = "autumn";
		break;
	case 10:
		monthName = "October";
		season = "autumn";
		break;
	case 11:
		monthName = "November";
		season = "autumn";
		break;
	case 12:
		monthName = "December";
		season = "winter";
		break;
	}
	std::cout << "month name is " << monthName << " season is " << season << std::endl;

	/* task 16 */

	int happyNumber = 0;
	std::cout << "vvedite proveryaemoe chislo " << happyNumber << std::endl;
	std::cin >> happyNumber;
	int digit1 = pervoe(happyNumber);
	int digit2 = vtoroe(happyNumber);
	int digit3 = tretye(happyNumber);
	int digit4 = chetvertoe(happyNumber);
	int digit5 = pyatoe(happyNumber);
	int digit6 = shestoe(happyNumber);
	if (happyNumber < 100000 || happyNumber>999999) {
		std::cout << "chislo he shestiznachnoe" << std::endl;
		return 0;
	}
	if ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6)) {
		std::cout << "shestiznachnoe chislo yavlaetsa chastlivym" << std::endl;    //сумма первфх трЄх цифр равна сумме трЄх последних
	}
	else {
		std::cout << "shestiznachnoe chislo ne yavlaetsa chastlivym" << std::endl;
	}

	/* task 17 */

	int numberKopeyka = 0;
	std::cout << "enter the number [1, 99]";
	std::cin >> numberKopeyka;

	if (numberKopeyka < 1 || numberKopeyka > 99) {
		std::cout << "the number is beyond 1 and 99" << std::endl;
		return 0;
	}

	int lastDigit = poslednyaa(numberKopeyka);
	int lastTwoDigits = dveposlednih(numberKopeyka);
	if (lastTwoDigits >= 11 && lastTwoDigits <= 14) {
		std::cout << numberKopeyka << " kopeek" << std::endl;
	}
	else {
		switch (lastDigit) {
		case 1:
			std::cout << numberKopeyka << " kopeyka" << std::endl;
			break;
		case 2:
			std::cout << numberKopeyka << " kopeyki" << std::endl;
			break;
		default:
			std::cout << numberKopeyka << " kopeek" << std::endl;
			break;
		}
	}

	/* task 18 */
	int palindrome = 0;
	std::cout << "enter the number " << std::endl;
	std::cin >> palindrome;
	int firstd = 0;
	int sd = 0;
	int td = 0;
	int fourthd = 0;
	firstd = pervayacifra(palindrome);
	sd = vtorayacifra(palindrome);
	td = tretyacifra(palindrome);
	fourthd = chetvertayacifra(palindrome);
	if (palindrome < 1000 || palindrome>9999) {
		std::cout << "chislo ne chetyrekhznachnoe" << std::endl;
		return 0;
	}
	if ((firstd == fourthd) && (sd == td)) {
		std::cout << "vveden palindrom" << std::endl;  //число читаетс€ одинаково с обеих сторон
	}
	else {
		std::cout << "vveden ne palindrom" << std::endl;
	}

	/* task 19*/

	int chislo19 = 0;
	int b19 = 0;
	std::cout << "enter chislo " << std::endl;
	std::cin >> chislo19;
	std::cout << "enter chislo b " << std::endl;
	std::cin >> b19;
	int fdigit = 0;
	int sdigit = 0;
	int tdigit = 0;
	fdigit = pervayacifraaa(chislo19);
	sdigit = vtorayacifraaa(chislo19);
	tdigit = tretyacifraaa(chislo19);
	if (chislo19 < 100 || chislo19>999) {
		std::cout << "chislo is veyond [100, 999]" << std::endl;
		return 0;
	}
	if ((fdigit * sdigit * tdigit) > b19) {
		std::cout << "proizvedenie bolshe b" << std::endl;
	}
	else if ((fdigit * sdigit * tdigit) == b19) {
		std::cout << "proizvedenie ravno b" << std::endl;
	}
	else {
		std::cout << "proizvedenie menshe b" << std::endl;		//for 19(a)
	}
	if ((fdigit + sdigit + tdigit) % 7 == 0) {
		std::cout << "summa kratna 7" << std::endl;
	}
	else {
		std::cout << "summa ne kratna 7" << std::endl;
		//for 19(b)
	}

	/* task 20 */
	double aa = 0;
	double bb = 0;
	double cc = 0;
	double dd = 0;
	std::cout << "enter storony pryamougolnika 1 " << std::endl;
	std::cin >> aa >> bb;
	std::cout << "enter storony pryamougolnika 2 " << std::endl;
	std::cin >> cc >> dd;
	if ((aa <= cc && bb <= dd) || (aa <= dd && bb <= cc)) {
		std::cout << "pryamougolnik so storonami " << aa << " i " << bb << " mozno pomestit v pryamougolnik so storonami " << cc << " i " << dd << std::endl;
	}
	else {
		std::cout << "pryamougolnik so storonami " << aa << " i " << bb << " nelzya pomestit v pryamougolnik so storonami " << cc << " i " << dd << std::endl;
	}

}

