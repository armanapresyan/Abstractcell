#ifndef SPREADSHEETCELL_H
#define SPREADSHEETCELL_H
#include <string>
#include <sstream>


class Abstractcell{
	public:	
    virtual ~Abstractcell() = default;
	virtual void set(std::string value) = 0;
    virtual std::string getString() const = 0;
	 
};

class Intcell : public Abstractcell{
	public:

	  Intcell();
      Intcell(int num);

   public:
     virtual void set(int value);
     void set(std::string value) override;
     std::string getString() const override;

   private:
    int m_value;
};


class Doublecell : public Abstractcell{
   public:

	Doublecell();
    Doublecell(double num);

   public:
     virtual void set(double value);
     void set(std::string value) override;
     std::string getString() const override;

   private:
    double m_value;
};


class Stringcell : public Abstractcell{
   public:

	Stringcell();
    Stringcell(const std::string& str);


   public:
     void set(std::string value) override;
     std::string getString() const override;

   private:
    std::string m_value;
};



#endif //SPREADSHEETCELL_H
