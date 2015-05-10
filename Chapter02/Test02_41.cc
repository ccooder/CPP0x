#include <iostream>

using namespace std;

struct Sales_data {
	string bookNo;
	unsigned unit_sold;
	double revenue;
};

int main()
{
	Sales_data data1, data2;
	double price;
	cin >> data1.bookNo >> data1.unit_sold >> price;
	data1.revenue = data1.unit_sold * price;
	cin >> data2.bookNo >> data2.unit_sold >> price;
	data2.revenue = data2.unit_sold * price;

	if(data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.unit_sold + data2.unit_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		cout << data1.bookNo << " :" << totalCnt << " "
			 << totalRevenue << endl;
		if(totalCnt > 0) {
			cout << totalRevenue/totalCnt << endl;
		}else {
			cout << "(no sales)" << endl;
		}
	}else {
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;
	}
	return 0;
}
