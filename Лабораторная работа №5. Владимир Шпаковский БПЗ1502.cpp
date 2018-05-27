//Лабораторная работа №5


#include <iostream>
#include <cmath>


using namespace std;

class Complex {
public:
    Complex(){}
    Complex(double re) {
        Complex::re = re;
        Complex::im = 0;
    }
    Complex(double re, double im) {
        Complex::re = re;
        Complex::im = im;
    }
    Complex(){}
    
    double Re(void) const {return re;}
    double Im(void) const {return im;}
    double R(void) const {return sqrt (re*re + im*im);}
    double Phi(void) const{return atan2(re,im);}
    
    friend ostream& operator<<(ostream &out, const Complex &rval) {
        out << rval.Re() << " + (" << rval.Im() << ")i";
        return out;
    }
    friend istream& operator>>(istream &in, Complex &rval) {
        in >> rval.re >> rval.im;
        return in;
    }
    
    Complex operator+(const Complex &rval) const {
        return Complex (re + rval.Re(), im + rval.Im());
    }
    Complex operator-(const Complex &rval) const {
        return Complex (re - rval.Re(), im - rval.Im());
    }
    Complex operator*(const Complex &rval) const {
        double i,j;
        i = re  rval.Re() - im  rval.Im();
        j = re  rval.Im() + rval.Re()  im;
        Complex result(i,j);
        return result;
    }
    Complex operator/(const Complex &rval) const {
        double i,j,rad;
        rad = re  re + rval.Im()  rval.Im();
        i = (re  rval.Re() + im  rval.Im()) / rad;
        j = (rval.Re()  im - re  rval.Im()) / rad;
        Complex result(i,j);
        return result;
    }
    Complex c_exp(const Complex &z) const {
        double i,j;
        i = exp(z.Re())  cos(z.Im());
        j = exp(z.Re())  sin(z.Im());
        Complex result(i,j);
        return result;
    }
    Complex c_sin(const Complex &z) const {
        double i,j;
        i = sin(z.Re())  cosh(z.Im());
        j = cos(z.Re())  sinh(z.Im());
        Complex result(i,j);
        return result;
    }
    Complex c_cos(const Complex &z) const {
        double i,j;
        i = cos(z.Re())  cosh(z.Im());
        j = -(sin(z.Re())  sinh(z.Im()));
        Complex result(i,j);
        return result;
    }
    Complex c_ch(const Complex &z) const {
        Complex f1(1.0);
        Complex f2(2.0);
        return ((c_exp(z)+(f1/c_exp(z)))/f2);
    }
    Complex c_sh(const Complex &z) const {
        Complex f1(1.0);
        Complex f2(2.0);
        return ((c_exp(z)-(f1/c_exp(z)))/f2);
    }
    Complex c_pow(const Complex &z1, const Complex &z2) const {
        double i,j,n;
        n = z2.Re();
        i = pow(z1.R(),n)  cos(n*z1.Phi());
        j = pow(z1.R(),n)  sin(n*z1.Phi());
        Complex result(i,j);
        return result;
    }
private:
    double re;
    double im;
};

Complex y(const Complex &z) {
    Complex f(2.0);
    return (f.c_pow(z,f) - f.c_cos(z*f));
}

int main(int argc, const char ** argv) {
    Complex z;
    cin >> z;
    cout << "User function = " << y(z) << endl;
    cout << "Sin(z) = " << z.c_sin(z) << endl;
    cout << "Cos(z) = " << z.c_cos(z) << endl;
    cout << "ch(z) = " << z.c_ch(z) << endl;
    cout << "sh(z) = " << z.c_sh(z) << endl;
    cout << "Exp(z) = " << z.c_exp(z) << endl;
    z.Complex();
    return 0;
}