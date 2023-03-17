#include "Sort.h"
#include <time.h>
#include <vector>
#include <stdarg.h>
#include <stdio.h>
#include <iostream>

using namespace std;

Sort::Sort(int nr, int min, int max) {
    srand(time(NULL));

    for (int i = 0; i < nr; i++) {
        x.push_back(rand() % (max - min + 1) + min);
    }
}

Sort::Sort(int v[], int nr){
    for (int i = 0; i < nr; i++) {
        x.push_back(v[i]);
    }
}

Sort::Sort(int count, ...) {
    va_list ptr;
    va_start(ptr, count);

    for (int j = 0; j < count; j++)
        x.push_back(va_arg(ptr, int));

    va_end(ptr);
}

Sort::Sort(string str) {
    int vir = 0;
    for (size_t j = 0; j < str.length(); j++) {
        if (str[j] == ',')
            vir++;
    }

    size_t pos = 0;
    std::string token;
    std::string delimiter = ",";
    int i = 0;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0, pos);
        x.push_back(stoi(token));
        i++;
        str.erase(0, pos + delimiter.length());
    }

    x.push_back(stoi(str)); // mai ramane doar caracterul de dupa ultima virgula
}

int Sort::GetElementsCount() {
    return x.size();
}

int Sort::GetElementFromIndex(int poz) {
    return x.at(poz);
}

void Sort::Print() {
    for (int i : x) {
        cout << i << " ";
    }
    cout << "\n========================\n";
}

void Sort::BubbleSort(bool ascendent) {
    if (ascendent == true) {
        int i, j;
        for (i = 0; i < x.size() - 1; i++)
            for (j = 0; j < x.size() - i - 1; j++)
                if (x[j] > x[j + 1]) {
                    int aux = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = aux;
                }
    }
    else {
        int i, j;
        for (i = 0; i < x.size() - 1; i++)
            for (j = 0; j < x.size() - i - 1; j++)
                if (x[j] <= x[j + 1]) {
                    int aux = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = aux;
                }
    }
}

void Sort::InsertSort(bool ascendent) {
    if (ascendent == true) {
        int i, key, j;
        for (i = 1; i < x.size(); i++) {
            key = x[i];
            j = i - 1;
            while (j >= 0 && x[j] > key)
            {
                x[j + 1] = x[j];
                j = j - 1;
            }
            x[j + 1] = key;
        }
    }
    else {
        int i, key, j;
        for (i = 1; i < x.size(); i++) {
            key = x[i];
            j = i - 1;
            while (j >= 0 && x[j] <= key)
            {
                x[j + 1] = x[j];
                j = j - 1;
            }
            x[j + 1] = key;
        }
    }
}

/*int Sort::partition(int start, int end, bool ascendent) {
    if (ascendent == true)
    {
        int pivot = x.at(start);
        int i = start, j = end;
        while (i < j) {
            do {
                i++;
            } while (x.at(i) <= pivot);
            do {
                j--;
            } while (x.at(j) > pivot);
            if (i < j)
                swap(x.at(i), x.at(j));
        }
        swap(x.at(start), x.at(j));
        return j;
    }
    else
    {
        int pivot = x.at(start);
        int i = start, j = end;
        while (i < j) {
            do {
                i++;
            } while (x.at(i) >= pivot);
            do {
                j--;
            } while (x.at(j) < pivot);
            if (i < j)
                swap(x.at(i), x.at(j));
        }
        swap(x.at(start), x.at(j));
        return j;
    }
}

void Sort::QuickSort(int s, int d, bool ascendent)
{
    if (s < d)
    {
        int p = partition(s, d, ascendent);
        QuickSort(s, p,  ascendent);
        QuickSort(p + 1, d, ascendent);
    }
}*/

int Sort::partition(int li, int ls, int pivot, bool ascendent) {
    if (ascendent == true)
    {
        int PIndex = li;
        int aux;
        for (int i = li; i <= ls; i++)
        {
            if (this->x.at(i) <= pivot) {
                aux = this->x.at(PIndex);
                this->x.at(PIndex) = this->x.at(i);
                this->x.at(i) = aux;
                PIndex++;
            }
        }
        PIndex--;
        return PIndex;
    }
    else
    {
        int PIndex = li;
        int aux;
        for (int i = li; i <= ls; i++)
        {
            if (this->x.at(i) >= pivot) {
                aux = this->x.at(PIndex);
                this->x.at(PIndex) = this->x.at(i);
                this->x.at(i) = aux;
                PIndex++;
            }
        }
        PIndex--;
        return PIndex;
    }
}
void Sort::QuickSort(int li, int ls, bool ascendent)
{
    if (li < ls)
    {
        int pivot = this->x.at(ls);
        int PIndex = partition(li, ls, pivot, ascendent);
        QuickSort(li, PIndex - 1, ascendent);
        QuickSort(PIndex + 1, ls, ascendent);
    }
}

