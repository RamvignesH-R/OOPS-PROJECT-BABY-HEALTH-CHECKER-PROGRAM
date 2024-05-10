#ifndef DETAILS_H
#define DETAILS_H
#include<iostream>
using namespace std;
class Details
{
public:
    virtual void inputDetails()=0;
    virtual void saveToFile(ofstream& outFile) = 0;
    virtual ~Details() {} 
};
#endif // DETAILS_H
