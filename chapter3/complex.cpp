/*
Simplest type of class: Concrete Types - Arithmetic Type
*/
class complex {
    double re, im; 
    public:
        complex(double r, double i): re{r}, im{i} {}
        complex(double r): re{r}, im{0} {}
        complex(): re{0}, im{0} {}

        double real() const { return re; }
        void real(double d) { re=d; }
        double imag() const { return im; }
        void im(double d) { im=d; }

        complex& operator+=(complex z) { re+=z.re, im+=z.im; return *this; }
        complex& operator-=(complex z) { re-=z.re, im-=z.im; return *this; }

        complex& operator==(complex z);  // define out-of-class somewhere
};