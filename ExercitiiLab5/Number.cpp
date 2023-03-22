#include "Number.h"
#include <iostream>
#include <cstring>
using namespace std;


int Number::toTen(const char* nr, int base) {
    int answer = 0;
    for (int i = 0; i < strlen(nr); ++i) {
        answer *= base;
        if (nr[i] >= '0' && nr[i] <= '9') {
            answer += nr[i] - '0';
        }
        else {
            answer += 10 + (nr[i] - 'A');
        }
    }
    return answer;
}

char* Number::fromTen(int nr, int base) {
    if (nr == 0) {
        char* answer = (char*)"0\0";
        return answer;
    }
    int copyNr = nr, answerSize = 0;
    while (copyNr) {
        answerSize++;
        copyNr /= base;
    }
    char* answer = new char[answerSize + 1];
    int current = answerSize - 1;
    while (nr) {
        int cifra = nr % base;
        char character;
        if (cifra < 10) {
            character = '0' + cifra;        // in ASCII
        } else {
            character = 'A' + (cifra - 10); // in ASCII
        }
        answer[current--] = character;
        nr /= base;
    }
    answer[answerSize] = '\0';
    return answer;
}


Number::Number(int valueBase10, int _base) {
    this->value = fromTen(valueBase10, _base);
    this->base = _base;
    this->numberSize = strlen(value);
    this->ten = valueBase10;
}


Number::Number(const char * _value, int _base){
    this->base = _base;
    this->ten = toTen(_value, _base);
    this->numberSize = strlen(_value);
    this->value = new char[numberSize + 1];
    for (int i = 0; i < numberSize; ++i) {
        this->value[i] = _value[i];
    }
    this->value[numberSize] = '\0';
}

Number::Number(int valueBase10) {
    this->value = fromTen(valueBase10, 10);
    this->base = 10;
    this->ten = valueBase10;
    this->numberSize = strlen(value);
}

Number::Number(const Number &obj) {
    this->base = obj.base;
    this->ten = obj.ten;
    this->numberSize = obj.numberSize;
    this->value = new char[numberSize + 1];
    for (int i = 0; i < numberSize; ++i) {
        value[i] = obj.value[i];
    }
    value[numberSize] = '\0';
}

Number::Number(Number &&obj) {
    this->value = obj.value;
    this->base = obj.base;
    this->ten = obj.ten;
    this->numberSize = obj.numberSize;
    obj.value = nullptr;
}

Number::~Number() {
    delete [] value;
}

// =========================================
void Number::SwitchBase(int newBase) {
    this->value = fromTen(ten, newBase);
    this->numberSize = strlen(value);
    this->base = newBase;
}

void Number::Print() {
    cout << value << "\n";
}

int Number::GetDigitsCount() {
    return this->numberSize;
}

int Number::GetBase() {
    return this->base;
}


Number operator+(const Number& a, const Number& b) {
    int add = a.ten + b.ten;
    int resultBase = max(a.base, b.base);
    Number answer = { add, resultBase };
    return answer;
}

Number operator-(const Number& a, const Number& b) {
    int sub;
    if (a.ten > b.ten) {
        sub = a.ten - b.ten;
    } else {
        sub = b.ten - a.ten;
    }
    int resultBase = max(a.base, b.base);
    Number answer = { sub, resultBase };
    return answer;
}

char Number::operator[](int index) {
    if (index >= 0 && index < numberSize) {
        return value[index];
    }
    return 0;
}

Number& Number::operator=(const Number& obj) {

    this->base = obj.base;
    this->ten = obj.ten;
    this->numberSize = obj.numberSize;
    delete[] value;
    this->value = new char[numberSize + 1];
    for (int i = 0; i < numberSize; ++i) {
        this->value[i] = obj.value[i];
    }
    this->value[numberSize] = '\0';
    return (*this);
}
Number& Number::operator=(const char* him) {
    int intHim = toTen(him, 10);
    this->value = fromTen(intHim, base);
    this->numberSize = strlen(value);
    this->ten = intHim;
    return (*this);
}
Number& Number::operator=(int him) {
    this->value = fromTen(him, base);
    this->numberSize = strlen(value);
    this->ten = him;
    return (*this);
}

bool Number::operator<(const Number& him) const {
    return (ten < him.ten);
}
bool Number::operator<=(const Number& him) const {
    return (ten <= him.ten);
}
bool Number::operator>(const Number& him) const {
    return (ten > him.ten);
}
bool Number::operator>=(const Number& him) const {
    return (ten >= him.ten);
}
bool Number::operator==(const Number& him) const {
    return (ten == him.ten);
}
bool Number::operator!=(const Number& him) const {
    return (ten != him.ten);
}

void operator+=(Number& me, const Number& him) {
    Number add = { me.ten + him.ten, max(me.base, him.base) };
    me = add;
}

void operator-=(Number& me, const Number& him) {
    Number sub = { me.ten >= him.ten ? me.ten - him.ten : him.ten - me.ten, max(me.base, him.base) };
    me = sub;
}

Number& Number::operator--() {
    for (int i = 0; i <= (int)numberSize - 2; ++i) {
        value[i] = value[i + 1];
    }
    numberSize--;
    value[numberSize] = '\0';
    ten = toTen(value, base);
    return (*this);
}

Number Number::operator--(int) {
    Number TempObject = *this;
    numberSize--;
    value[numberSize] = '\0';
    ten = toTen(value, base);
    return TempObject;
}

