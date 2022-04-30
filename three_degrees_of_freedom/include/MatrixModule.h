#ifndef MATRIX_MODULE
#define MATRIX_MODULE

// solo para matrices de 3x3 y vectores de 3 entradas todo orientado a 3 DoF

class matrix{
    private:
        int rows,columns;
        double **arrmatrix;
    public:
        matrix();
        matrix(int, int);
        ~matrix();
        void setMatrixValue(int, int, double);
        void setVectorValue(int, double);
        double getMatrixValue(int, int);
        double getVectorValue(int);
        matrix* operator +(matrix*);
        matrix* operator -(matrix*);
        matrix* operator *(matrix*);
        matrix* hadamad(matrix*);
        matrix* scalarMult(double, matrix*);
};

#endif