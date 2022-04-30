#include "../include/MatrixModule.h"

// solo para matrices de 3x3 y vectores de 3 entradas todo orientado a 3 DoF

matrix::matrix(){}

matrix::matrix(int row, int column){
    this->rows = row;
    this->columns = column;
    this->arrmatrix = new double*[row];
    for(int i=0; i<=row-1; i++){
        this->arrmatrix[i] = new double[column];
    }
}

matrix::~matrix(){
    delete[] this->arrmatrix;
}

void matrix::setMatrixValue(int row, int column, double data){
    this->arrmatrix[row][column] = data;
}

void matrix::setVectorValue(int column, double data){
    this->arrmatrix[0][column] = data;
}

double matrix::getMatrixValue(int row, int column){
    return this->arrmatrix[row][column];
}

double matrix::getVectorValue(int column){
    return this->arrmatrix[0][column];
}

matrix* matrix::operator +(matrix* m){
    int row = this->rows;
    int column = this->rows;
    matrix *aux = new matrix;
    *aux = matrix(this->rows, this->columns);
    for(int i=0; i<=row-1; i++){
        for(int j=0; j<=column-1; j++){
            aux->arrmatrix[i][j] = this->arrmatrix[i][j] + m->arrmatrix[i][j];
        }
    }
    return aux;
}

matrix* matrix::operator -(matrix* m){
    int row = this->rows;
    int column = this->rows;
    matrix *aux = new matrix(row, column);
    for(int i=0; i<=row-1; i++){
        for(int j=0; j<=column-1; j++){
            aux->arrmatrix[i][j] = this->arrmatrix[i][j] - m->arrmatrix[i][j];
        }
    }
    return aux;
}

matrix* matrix::operator *(matrix* m){

}

matrix* matrix::hadamad(matrix* m){
    int row = this->rows;
    int column = this->rows;
    matrix *aux = new matrix;
    *aux = matrix(this->rows, this->columns);
    for(int i=0; i<=row-1; i++){
        for(int j=0; j<=column-1; j++){
            aux->arrmatrix[i][j] = this->arrmatrix[i][j] * m->arrmatrix[i][j];
        }
    }
    return aux;
}

matrix* matrix::scalarMult(double scalar, matrix* m){
    int row = this->rows;
    int column = this->rows;
    matrix *aux = new matrix;
    *aux = matrix(this->rows, this->columns);
    for(int i=0; i<=row-1; i++){
        for(int j=0; j<=column-1; j++){
            aux->arrmatrix[i][j] = scalar * m->arrmatrix[i][j];
        }
    }
    return aux;
}