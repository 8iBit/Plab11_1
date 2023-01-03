#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int count=0;
    double sum=0, sd=0, mean, powsum=0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum+=stod(textline);
        powsum+=pow(stod(textline),2);
        count++;
    }
    mean=sum/count;
    sd=sqrt(((1.0/count)*powsum)-pow(mean,2));
    cout << setprecision(3);
    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd; 
}