class Vector {
    public:
        Vector(int s);
        double& operator[](int i); // function/operator overloading
        int size();
    private:
        double* elem; // pointer to the elements
        int sz;
};