# Electricity_Billing_System

This is a simple C++ program for an Electricity Billing System. It allows you to create electricity bills for customers, calculate the total amount due, and save the bills to text files. 
This README provides an overview of the program's structure and functionality.

# Introduction
The Electricity Billing System consists of three main classes:

Customer: Represents a customer with name, contact information, and meter number.

ElectricityBill: Represents an electricity bill, including the customer, bill date, consumption, rate per unit, and total amount.

ElectricityBillingSystem: Manages the billing system, including generating bills and saving them to text files.

# Classes
Customer
The Customer class has the following private attributes:

name: Customer's name.
contactInfo: Customer's contact information.
meterNumber: Customer's meter number.
It provides getter methods to access these attributes.

ElectricityBill
The ElectricityBill class represents an electricity bill and contains the following private attributes:

customer: An instance of the Customer class.
billDate: The date when the bill was generated.
consumption: The electricity consumption in units.
ratePerUnit: The rate per unit of electricity.
It provides getter methods to access these attributes and a method to calculate the total amount due.

ElectricityBillingSystem
The ElectricityBillingSystem class manages the billing process and has the following attributes:

ratePerUnit: The rate per unit of electricity.
It provides two main methods:

generateBill: Generates an electricity bill for a customer and displays it in the console.
saveBillToFile: Saves the bill to a text file with a filename composed of the customer's name and bill date.
