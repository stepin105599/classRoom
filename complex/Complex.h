#ifndef __COMPLEX_H
#define __COMPLEX_H

template<typename T>
class Complex
{
private:
    T m_real;
    T m_imag;

public:
    Complex():m_real(0),m_imag(0){

    }

    Complex(T a, T b):m_real(a),m_imag(b){

    }
    

    int getReal();
    int getImag();
};

template<typename T>
int Complex<T>::getReal()
{
    return m_real;
}
template<typename T>
int Complex<T>::getImag()
{
    return m_imag;
}

#endif