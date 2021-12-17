//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";


#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
using namespace std;

int main (){

    ifstream source;
    source.open("score.txt") ;
    string num;
    double sum = 0;
    double sum2 = 0;
    double count = 0;
    
    while(getline(source,num)){
        sum += atof(num.c_str());
        sum2 += pow(atof(num.c_str()),2);
        count++;
    }

    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    double mean = sum/count;
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sqrt((sum2/count)-pow(mean,2))  << "\n";
    return 0;
}

