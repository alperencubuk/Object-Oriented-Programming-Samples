#include <iostream>
#include <fstream>

using namespace std;

struct salesPersonRec
{
	string ID;  	//salesperson’s ID
	double saleByQuarter[4];  //array to store the total
   					  //sales for each quarter
	double totalSale;  //salesperson’s yearly
			       //sales amount
};

salesPersonRec salesPersonList[6];

double totalSaleByQuarter[4];


int main()
{
    ifstream personFile("salesPerson.txt");
    ifstream dataFile("salesData.txt");
    ofstream annualReport("annualReport.txt");
    string personID;
    int personCounter = 0;
    int saleMonth;
    double saleAmount;
    //Read salesPerson IDs
    while(!personFile.eof()){
        personFile >> salesPersonList[personCounter].ID;
        salesPersonList[personCounter].saleByQuarter[0] = 0;
        salesPersonList[personCounter].saleByQuarter[1] = 0;
        salesPersonList[personCounter].saleByQuarter[3] = 0;
        salesPersonList[personCounter].saleByQuarter[4] = 0;
        salesPersonList[personCounter].totalSale = 0;
    }

    //Read SalesPerson Sales Data

    while(!dataFile.eof()){
        //More complicated do it at home
        dataFile >> personID;
        personCounter = 0;
        while(personCounter < 6){
            if(personID == salesPersonList[personCounter].ID)
               break;
            personCounter ++;
        }

        dataFile >> saleMonth;
        dataFile >> saleAmount;

        if(saleMonth >= 1 && saleMonth <=3)
            salesPersonList[personCounter].saleByQuarter[0] += saleAmount;

        if(saleMonth >= 4 && saleMonth <=6)
            salesPersonList[personCounter].saleByQuarter[1] += saleAmount;

        if(saleMonth >= 7 && saleMonth <=9)
            salesPersonList[personCounter].saleByQuarter[2] += saleAmount;

        if(saleMonth >= 10 && saleMonth <=12)
            salesPersonList[personCounter].saleByQuarter[3] += saleAmount;

    }

    //print Sales Report



    cout << "Hello world!" << endl;
    return 0;
}
