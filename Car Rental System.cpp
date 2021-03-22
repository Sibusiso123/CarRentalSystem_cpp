#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <Windows.h>
#include <iomanip>

using namespace  std;

class customer {
public:
	string customername;
	string carmodel;
	string carnumber;
	string country;
	string city;
	int rate;
};

class rent : public customer {
public:
	int days = 0;
	int rentfee = 0;

	void data() {
		int login();
		login();
		cout << "\t\t\t\tPlease Enter your Name: ";
		getline(cin, customername);
		cout << endl;
		cout << "\t\t\t\tPlease Enter the country you are from : ";
		getline(cin, country);
		cout << endl;
		cout << "\t\t\t\tPlease Enter the city you are from : ";
		getline(cin, city);
		cout << endl;
		do{
			cout << "\t\t\t\tPlease Select a Car" << endl;
			cout << "\t\t\t\tEnter 'A' for Polo 1.0 TSI Comfortline DSG R-Line 2021." << endl;
			cout << "\t\t\t\tEnter 'B' for Mercedes-AMG 45 S 4MATIC+  2020." << endl;
			cout << "\t\t\t\tEnter 'C' for Mercedes-AMG G63 2021." << endl;
			cout << endl;
			cout << "\t\t\t\tChoose a Car from the above options: ";
			cin >> carmodel;
			cout << endl;
			cout << "--------------------------------------------------------------------------" << endl;
			if (carmodel == "A")
			{
				system("CLS");

				ifstream cA("C:\\Users\\User\\Documents\\2021 Projects\\C++\\Car Rental System\\A.txt");
				char a[200];
				while (cA)
				{
					cA.getline(a, 200);
					if (cA) {
						cout << a << endl;
					}
				}
				Sleep(2);
			}
			if (carmodel == "B") {
				system("CLS");

				ifstream cB("C:\\Users\\User\\Documents\\2021 Projects\\C++\\Car Rental System\\B.txt");
				char b[200];
				while (cB)
				{
					cB.getline(b, 200);
					if (cB) {
						cout << b << endl;
					}
				}
				Sleep(2);
			}
			if (carmodel == "C")
			{
				system("CLS");

				ifstream cC("C:\\Users\\User\\Documents\\2021 Projects\\C++\\Car Rental System\\C.txt");
				char c[200];
				while (cC)
				{
					cC.getline(c, 200);
					if (cC) {
						cout << c << endl;
					}
				}
				Sleep(2);
			}

			if (carmodel != "A" && carmodel != "B" && carmodel != "C") {
				cout << "Invaild Car Model. Please try again!" << endl;
			}
		} while (carmodel != "A" && carmodel != "B" && carmodel != "C");
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "Please provide the following information: " << endl;
		cout << "Please select a Car No. : ";
		cin >> carnumber;
		cout << "Please select the number of days you wish to rent the car : ";
		cin >> days;
		cout << endl;
	}

	void calculate() {
		Sleep(1);
		system("CLS");
		cout << "Calculating rent. Please wait......" << endl;
		Sleep(1000);
		if (carmodel == "A") {
			rentfee = days * 55;
		}
		if (carmodel == "B") {
			rentfee = days * 60;
		}
		if (carmodel == "C") {
			rentfee = days * 75;
		}

	}

	void UserRating() {
		Sleep(2);
		system("CLS");
		cout << "How was the experience using our system? Please rate us from 1-10 :";
		cin >> rate;
		if (rate >= 1 && rate <= 10) {
			cout << "\n\n\n\t\tThank You!!" << endl;
		}
		else {
			cout << "Please select a number from 1-10." << endl;
			Sleep(1000);
			UserRating();
		}
	}

	void showrent() {
		ofstream receipt;
		receipt.open("C:\\Users\\User\\Documents\\2021 Projects\\C++\\Car Rental System\\" + customername + ".txt");

		cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
		receipt << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
		cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
		receipt << "\t\t	///////////////////////////////////////////////////////////" << endl;
		cout << "\t\t	| Invoice No. :" << "------------------|" << setw(10) << "#Cnb81353" << " |" << endl;
		receipt << "\t\t	| Invoice No. :" << "------------------|" << setw(10) << "#Cnb81353" << " |" << endl;
		cout << "\t\t	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
		receipt << "\t\t	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
		cout << "\t\t	| Country      :" << "-----------------|" << setw(10) << country << " |" << endl;
		receipt << "\t\t	| Country      :" << "-----------------|" << setw(10) << country << " |" << endl;
		cout << "\t\t	| City:         "          << "-----------------|" << setw(10) << city << " |" << endl;
		receipt << "\t\t	| City:         " << "-----------------|" << setw(10) << city << " |" << endl;
		cout << "\t\t	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
		receipt << "\t\t	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
		cout << "\t\t	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
		receipt << "\t\t	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
		cout << "\t\t	| Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
		receipt << "\t\t	| Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
		cout << "\t\t	| Your Rental Amount is :" << "--------|" << setw(10) << rentfee << " |" << endl;
		receipt << "\t\t	| Your Rental Amount is :" << "--------|" << setw(10) << rentfee << " |" << endl;
		cout << "\t\t	| Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
		receipt << "\t\t	| Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
		cout << "\t\t	| Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
		receipt << "\t\t	| Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
		cout << "\t\t	 ________________________________________________________" << endl;
		receipt << "\t\t	 ________________________________________________________" << endl;
		cout << endl;
		receipt << endl;
		cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(10) << rentfee << " |" << endl;
		receipt << "\t\t	| Total Rental Amount is :" << "-------|" << setw(10) << rentfee << " |" << endl;
		cout << "\t\t	 ________________________________________________________" << endl;
		receipt << "\t\t	 ________________________________________________________" << endl;
		cout << "\t\t	 # This is a computer generated invoce and it does not" << endl;
		receipt << "\t\t	 # This is a computer generated invoce and it does not" << endl;
		cout << "\t\t	 require the customer's signture #" << endl;
		receipt << "\t\t	 require the customer's signture #" << endl;
		cout << " " << endl;
		receipt << " " << endl;
		cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
		receipt << "\t\t	///////////////////////////////////////////////////////////" << endl;
		cout << "\t\t	You are advised to pay up the amount before due date." << endl;
		receipt << "\t\t	You are advised to pay up the amount before due date." << endl;
		cout << "\t\t	Otherwise penalty fee will be applied" << endl;
		receipt << "\t\t	Otherwise penalty fee will be applied" << endl;
		cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
		receipt << "\t\t	///////////////////////////////////////////////////////////" << endl;
		system("PAUSE");
		system("CLS");
	}

};


int main() {
	rent b;
	b.data();
	b.calculate();
	b.showrent();
	b.UserRating();

	return 0;
}

int login() {
	string password;
	char ch;
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t      HEISENBURG'S CAR RENTAL SYSTEM \n\n";
	cout << "\t\t\t\t----------------------------------------";
	cout << "\n\t\t\t\t\t     LOGIN \n";
	cout << "\t\t\t\t----------------------------------------\n\n";
	cout << "\t\t\t\t\tEnter Password: ";
	ch = _getch();
	while (ch != 13) {
		password.push_back(ch);
		cout << '*';
		ch = _getch();
	}
		if (password == "password") {
			cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
			system("PAUSE");
			system("CLS");
		}
		else {
			cout << "\n\n\t\t\t\t\t\t\tAccess Denied...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
			system("PAUSE");
			system("CLS");
			login();
		}
	return 1;
}