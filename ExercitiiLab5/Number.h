#ifndef EXERCITIILAB5_NUMBER_H
#define EXERCITIILAB5_NUMBER_H


class Number {
private:
    char* value;
    unsigned int numberSize;
    int base, ten;
    static int toTen(const char* nr, int base);
    static char* fromTen(int nr, int base);
    Number(int valueBase10, int base);

public:
    Number(const char * value, int base); // where base is between 2 and 16
    Number(int valueBase10);
    Number(const Number& obj);
    Number(Number&& obj);
    ~Number();

    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount(); // returns the number of digits for the current number
    int GetBase();        // returns the current base

    // add operators
    friend Number operator+(const Number& a, const Number& b);
    friend Number operator-(const Number& a, const Number& b);
    char operator[](int index);
    bool operator <(const Number& him) const;
    bool operator <=(const Number& him) const;
    bool operator >(const Number& him) const;
    bool operator >=(const Number& him) const;
    bool operator ==(const Number& him) const;
    bool operator !=(const Number& him) const;
    friend void operator +=(Number& me, const Number& him);
    friend void operator -=(Number& me, const Number& him);
    Number& operator--();
    Number operator--(int);
    Number& operator=(const Number& obj);
    Number& operator=(const char* him);
    Number& operator=(int him);
};


#endif //EXERCITIILAB5_NUMBER_H
