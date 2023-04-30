#include <iostream>
#include <fstream>
#include <map>
#include <queue>
#include <string>

using namespace std;

    ifstream input("C:\\Users\\Daniel\\Desktop\\POO\\ExercitiiLab\\ExercitiiLab8\\input.txt");
    string separatori = ".,?! ";
    map<string ,int> nrCuv;

    class Comparator {
    public:
        bool operator() (const string &left, const string &right) const {
            int X = nrCuv[left];
            int Y = nrCuv[right];
            if(X == Y) {
                return left > right;
            }
            return X < Y;
        }
    };

    bool eSeparator(char ch) {
        return (separatori.find(ch) != string::npos);
    }

    void desparteInCuv(string &prop){
        int l = (int) prop.length();
        string cuvCurent;
        for(int i=0; i<l; i++){
            if(eSeparator(prop[i])){
                if(!cuvCurent.empty()){
                    nrCuv[cuvCurent]++;
                    cuvCurent.clear();
                }
            }else{
                if (prop[i] >= 'A' && prop[i] <= 'Z') {
                    prop[i] += 32;
                }
                cuvCurent += prop[i];
                }
        }
        if(!cuvCurent.empty()){
            nrCuv[cuvCurent]++;
        }
    }


    int main() {
        string propozitie;
        getline(input,propozitie);
        desparteInCuv(propozitie);
//        for (const auto& kv : nrCuv) {
//            cout << kv.first << " : " << kv.second << std::endl;
//        }
        priority_queue<string, vector<string>, Comparator> cuvSortate;
        for(map<string, int> :: iterator it = nrCuv.begin(); it != nrCuv.end(); it++) {
            cuvSortate.push(it -> first);
        }
        while(!cuvSortate.empty()) {
            string TOP = cuvSortate.top();
            cuvSortate.pop();
            cout << TOP << " => " << nrCuv[TOP] << '\n';
        }
    return 0;
}
