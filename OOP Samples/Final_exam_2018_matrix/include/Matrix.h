#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
    public:
        Matrix();
        Matrix(int rowsIn, int columnsIn, int isUnit=0);
        double *operator[](int index);
        Matrix operator*(const Matrix& matrixIn);
        Matrix operator*(const double scalarIn);
        Matrix operator+(const Matrix& matrixIn);

        int getRows();
        int getColumns();
        bool isUnit();

        virtual ~Matrix();

    protected:

    private:
        double **matrix;
        int rows;
        int columns;
};

#endif // MATRIX_H
