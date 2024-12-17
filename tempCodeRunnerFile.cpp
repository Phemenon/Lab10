#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include <iomanip>

using namespace std;

int main(){
    int count=0;
    double mean = 0, svg=0, sum = 0, deviation = 0;
    string textline;
    ifstream source("score.txt");

    while (getline(source,textline)){
        mean += atof(textline.c_str());
        count++;
    }
    svg = mean/count;

    source.clear();
    source.seekg(0, ios::beg);

    while (getline(source,textline)){
        double num = atof(textline.c_str());
        sum += (num - mean) * (num - mean);        count++;
    }
    deviation = sqrt(sum);

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << deviation << "\n";
}