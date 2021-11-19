#pragma once
#include <iostream>
#include <ctime>
#include <fstream>
#include <stdlib.h>
using namespace std;
/*!
    Main DoubleMatrix class
    \brief Present: public, private
*/
class DoubleMatrix
{
private:

    int** matrix_; ///<matrix
    int lenght, r = 0;
    bool a = true, t = false, check = true;///<flags
public:

    
    int n, m;///< n -  size rows list , m - number cols list 

    DoubleMatrix(int n, int m_); ///<Constructor 

    void create_matrix();///<functrions create list
    
    

    bool operator ==(DoubleMatrix a);///<equal sign overload
    DoubleMatrix& operator ++(); ///<Overloading pre - increment
    DoubleMatrix& operator --();///<Overloading pre-dicrement
    DoubleMatrix operator ++ (int);///<Overloading post-increment
    DoubleMatrix operator -- (int);///<Overloading post-dicrement


    void print();///<show list
    void create_file_matrix();///<read list at file
    void delete_matrix();///<clearing memory
    void Increase_elements_arr();///<function that allows you to increase each element of the array by 1 
    void Decrease_elements_arr();///<function that allows you to decrease each element of the array by 1
    void Resize(int n, int m);///<Constructor with two variables
    void change_size_rows(int n_1);///<function that allows you to resize a string
    void change_size_columns(int m_1);///<function that allows you to resize a column
    bool zero_matrix(); ///<ñhecking an array for a null matrix
    bool square_matrix();///<checking an array for a square matrix
    bool diaginal();///<checking an array for a diagonal matrix
    void file_matrix(string l);///<functions write matrix in file
    bool lower_triangular();///<checking an array for a lower triangular matrix
    bool large_triangularl();///<checking an array for a large triangular matrix
    bool single_matrix();///<checking an array for a single matrix
    bool symmetric_matrix();///<checking an array for a symmetric
    void removing_the_submatrix();///<function that allows you to extract a matrix of a given size
    void transposition();///<functions that allows transposition matrix
};