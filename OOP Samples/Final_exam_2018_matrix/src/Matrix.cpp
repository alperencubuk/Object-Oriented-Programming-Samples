#include "Matrix.h"

Matrix::Matrix()
{
   //ctor
   rows = 10;
   columns = 10;
   matrix = new double *[rows];
   for(int i = 0; i < rows; i++)
      matrix[i] = new double[columns];
}

Matrix::Matrix(int rowsIn, int columnsIn, int isUnit){

   if(isUnit)
     rows = columns = rowsIn;
   else
     rows = rowsIn;

   columns = columnsIn;
   matrix = new double *[rows];
   for(int i = 0; i < rows; i++)
      matrix[i] = new double[columns];

   if(isUnit){
     for(int i = 0; i < rows; i++)
       matrix[i][i] = 1;
   }
}

double *Matrix::operator[](int index){
   if(index < rows)
     return matrix[index];
   else
     return matrix[0];
}

Matrix Matrix::operator*(const Matrix& matrixIn){

    Matrix outMatrix(this->rows, matrixIn.columns);

    if(this->columns == matrixIn.rows){
       int i,j,k;
       for(i=0; i<this->columns; i++ ){
         for(j=0; j<matrixIn.rows; j++){
            int subTotal=0;
            for(k=0; k<matrixIn.rows; k++)
                subTotal += this->matrix[i][k]*matrixIn.matrix[k][j];
            outMatrix[i][j] = subTotal;
         }
       }
    }

    return outMatrix;

}


Matrix Matrix::operator*(const double scalarIn){

   Matrix outMatrix(this->rows, this->columns);

   int i,j;
   for(i=0; i<this->columns; i++ ){
     for(j=0; j<this->rows; j++){
        outMatrix[i][j] = matrix[i][j] * scalarIn;
     }
   }


   return outMatrix;
}

Matrix Matrix::operator+(const Matrix& matrixIn){

    Matrix outMatrix(this->rows, this->columns);
    if(this->columns == matrixIn.columns && this->rows == matrixIn.rows){
       int i,j;
       for(i=0; i<this->columns; i++ ){
         for(j=0; j<this->rows; j++){
            outMatrix[i][j] = matrix[i][j] + matrixIn.matrix[i][j];
         }
       }
    }
    return outMatrix;
}


bool Matrix::isUnit(){
   for(int i=0; i<rows; i++)
      if(matrix[i][i] != 1)
        return false;
   return true;
}

int Matrix::getRows(){
   return rows;
}

int Matrix::getColumns(){
   return columns;
}

Matrix::~Matrix()
{
    //dtor
}
