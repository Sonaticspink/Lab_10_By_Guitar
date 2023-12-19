#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    int i = 0;
    double mean,bmean=0,SD=0,bSD;
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source, textline)){
        i++;
        bmean+=atof(textline.c_str());
        bSD += (atof(textline.c_str())*atof(textline.c_str()));
    }
    mean = bmean/i;
    SD = sqrt((bSD/i)-(pow(mean,2)));

    cout << "Number of data = "<<i<<'\n';
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<SD;
}