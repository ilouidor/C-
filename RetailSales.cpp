//  Retail_Assistant.cpp
//  Retail Sales Assistant Program
//  Programmer: Idonel Louidor	
//  Date: 09/29/2019
//  Description:  This program calculates sales tax for a series of products.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double cashDrawer = 100.00;
	int productID = 0;
	int quantity = 0;
	double price = 0.0;
	double subtotal = 0.0;
	double salesTax = 0.0;
	double totalSale = 0.0;
	double taxRate = 0.0;
	int anotherSale = 1;

	// Loop for repeat sales
	do 
	{

		// Enter the first Product ID for the first sale (-1 to exit)
		cout <<endl<< "enter the first product (-1 to exit): ";
		cin >> productID;


		// Main loop for each sale
		while (productID != -1) {


			// enter the quantity for each product 
			cout <<endl<< "Enter the quantity for product:";
			cin >> quantity;


			// Switch statement to determine the price, and calculate sales tax, if any, for the item.
			switch (productID)
			{
			case 101:
				price = 3.95;
				taxRate = 0.0;
				break;

			case 102:
				price = 1.85;
				taxRate = 0.075;
				break;
			case 103:
				price = 2.49;
				taxRate = 0.075;
				break;
			case 104:
				price = 5.19;
				taxRate = 0.075;
				break;
			case 105:
				price = 4.99;
				taxRate = 0.0;
				break;
			case 106:
				price = 3.25;
				taxRate = 0.075;
				break;
			case 107:
				price = 4.85;
				salesTax = 0.0;
				break;
			case 108:
				price = 3.99;
				taxRate = 0.075;
				break;
			case 109:
				price = 1.99;
				taxRate = 0.0;
				break;
			case 110:
				price = 5.25;
				taxRate = 0.075;
				break;
			default:
				cout <<endl<< "ERROR: product number are between 101-110" << endl;
				price = 0.0;
				quantity = 0;

			}
			// add subtotal and sale tax
			subtotal += quantity * price;
			salesTax += taxRate * quantity * price;

			// Get next Product ID
			cout <<endl<< "enter the next product(-1 to exit): ";
			cin >> productID;


		} // End main loop for this sale

		// to calculate sales for the first sales table
		totalSale = subtotal + salesTax;

		// Print properly formatted receipt (Subtotal, Tax, Total Sale) for each sale
		cout <<endl<< " Subtotal:   $" << fixed << setw(8) << setprecision(2) << subtotal << endl;
		cout <<endl<<"  sale tax:   $" << setw(8) << setprecision(2) << salesTax << endl;
		cout <<endl<<"  total Sale: $" << setw(8) << setprecision(2) << totalSale << endl;


		// Add total sale to the cashdrawer
		cashDrawer += totalSale;


		// Reset for next sale
		subtotal = 0.0;
		salesTax = 0.0;
		totalSale = 0.0; 

		// Another sale?
		cout << endl<<  "enter 1 to do another sale or enter 0 to end sale: ";
		cin >> anotherSale; 


		} while (anotherSale != 0);// End " do" loop for repeat sale



	// Display how much is in the cash drawer at the end
	totalSale -= cashDrawer;
	cout << "\ncash Drawer Total: $" << setw(9) << setprecision(2) << cashDrawer << endl;
	system("pause");
	
}
