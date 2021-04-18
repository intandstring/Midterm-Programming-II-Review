#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int maxdivisor(const int a,const int b)
{
    int maxd=1;
    int x=abs(a);
    int y=abs(b);
    for(int i=1;i<=x&&i<=y;++i){
        if(x%i==0&&y%i==0)maxd=i;
    }
    return maxd;
}



class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction()
    {
        numerator=0;
        denominator=1;
    }
    Fraction(int a,int b)
    {
        numerator=a;
        denominator=b;
    }
    int getNumerator() // return the numerator of the fraction number.
    {
        return numerator;
    }
    int getDenominator() // return the denominator of the fraction number.
    {
        return denominator;
    }
    void setNumerator(int a) // use the parameter to set numerator of the fraction.
    {
        numerator=a;
    }
    void setDenominator(int b) // use the parameter to set denominator of the fraction.
    {
        denominator=b;
    }
    void display()
    {
        int gcd=maxdivisor(numerator,denominator);
        cout<<"("<<numerator/gcd;
        if(denominator/gcd!=1){
            cout<<"/"<<denominator/gcd;
        }
        cout<<")";
    }

    const Fraction operator *(Fraction b)
    {
        int multnum=numerator*b.getNumerator();
        int multden=denominator*b.getDenominator();
        return Fraction(multnum,multden);
    }

    const Fraction operator /(Fraction b)
    {
        int multnum=numerator*b.getDenominator();
        int multden=denominator*b.getNumerator();
        return Fraction(multnum,multden);
    }

    const Fraction operator +(Fraction b)
    {
        int multnum=numerator*b.getDenominator()+denominator*b.getNumerator();
        int multden=denominator*b.getDenominator();
        return Fraction(multnum,multden);
    }

    const Fraction operator -(Fraction b)
    {
        int multnum=numerator*b.getDenominator()-denominator*b.getNumerator();
        int multden=denominator*b.getDenominator();
        return Fraction(multnum,multden);
    }

    friend ostream& operator <<(ostream& outputStream, Fraction a)
    {
        int gcd=maxdivisor(a.numerator,a.denominator);
        outputStream<<"("<<a.numerator/gcd;
        if(a.denominator/gcd!=1){
            outputStream<<"/"<<a.denominator/gcd;
        }
        outputStream<<")";
        return outputStream;
    }


    Fraction operator !()
    {
        return Fraction(denominator,numerator);
    }
};


int main(void)
{
    Fraction a=Fraction(3,9);
    a.display();
    return 0;
}

