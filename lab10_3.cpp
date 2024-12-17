#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include <iomanip>

using namespace std;

int main(){
        int count = 0;

        float sum = 0;

        float sum_of_square = 0;

        string textline;

        ifstream source("score.txt");

        while (getline(source,textline))

        {

                sum += atof(textline.c_str());

                count++;

        }

        float mean = sum/count;

        source.clear();
        source.seekg(0, ios::beg);

        while (getline(source, textline)) 
        
        {

                sum_of_square += pow(atof(textline.c_str())-mean, 2);
        }

        float n = sqrt(sum_of_square/count);

        cout << "Number of data = " << count << "\n";

        cout << setprecision(3);

        cout << "Mean = " << mean << "\n";

        cout << "Standard deviation = "<<n;
}