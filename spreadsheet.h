#ifndef Spreadsheet_H
#define Spreadsheet_H
#include "abstractcell.h"



class Spreadsheet{

	public:
		Spreadsheet(int row, int column);
		Spreadsheet(const Spreadsheet& oth);
		Spreadsheet operator+(const Spreadsheet& rhs);
		Spreadsheet& operator=(const Spreadsheet& rhs);
		Abstractcell** operator[](int row) const;
		~Spreadsheet();
	public: 
		void addRow(int number);
		void addColumn(int number);
		void removeRow(int number);
		void removeColumn(int number);
		int get_row() const;
		int get_column() const;
		std::string getCell(int row, int col) const;
		void setCell(int row, int col,const std::string& str);
		void print();
	private:
		Abstractcell*** m_cell;
		int m_row;
		int m_column;
};



std::ostream& operator<<(std::ostream& os, const Spreadsheet& s);

#endif //SPREADSHEET_H 
