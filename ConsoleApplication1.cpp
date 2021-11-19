#include "Header.h"
#include <iostream>
#include <ctime>
#include <fstream>
#include <stdlib.h>
using namespace std;

DoubleMatrix::DoubleMatrix(int n_, int m_) 
{/*!
     \brief Array initialization and array sizes                 
 */
        this->n = n_;
        this->m = m_;
        matrix_ = new int* [n];
        for (int i = 0; i < n; i++)
        {
            matrix_[i] = new int[m];
        }
};
   
    void DoubleMatrix::create_matrix()
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrix_[i][j] = rand() % 11 - 3;
                //cin >> matrix_[i][j];
            }
        }
    }
    void DoubleMatrix::create_file_matrix() {
        /*!
        create an object to write to a file
        link the object to the file
        */
        ofstream fon("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\Data.txt");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                //matrix_[i][j] = rand() % 11 - 3;
                cin >> matrix_[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                /*!
                Write to file
                */
                fon << matrix_[i][j];
                if (j + 1 == m)
                {
                    break;
                }
                else
                    fon << ' ';

            }
            if (i + 1 == n)
            {
                break;
            }
            else
                fon << "\n";
        }
        /*!
        close file
        */
        fon.close();

    }
    void DoubleMatrix::print() {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix_[i][j] << " ";
            }
            cout << "\n";
        }
    }
    void DoubleMatrix::delete_matrix()
    {
        for (int i = 0; i < n; i++)
        {
            delete[]matrix_[i];
        }
        delete[]matrix_;
    }
    void DoubleMatrix::Increase_elements_arr() {
        /*!Allocate memory for the new matrix
         *Allocate memory for the array of pointers*/
        int** matrix_inc = new int* [n];
    
        for (int i = 0; i < n; i++)
        {
            matrix_inc[i] = new int[m];/*!number of lines, number of pointers*/
        }
        /*!Compare the new matrix with the original*/
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix_inc[i][j] = matrix_[i][j];

            }
        }

        /*!increase each elements for one*/
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix_inc[i][j] += 1;

            }
        }
        /*! freeing memory*/
        for (int i = 0; i < n; i++)
        {
            delete[]matrix_[i];
        }
        delete[]matrix_;

        /*!Assigning a new matrix from the original*/

        matrix_ = matrix_inc;
    }
    void DoubleMatrix::Decrease_elements_arr() {
        int** matrix_dec = new int* [n];
        for (int i = 0; i < n; i++)
        {
            matrix_dec[i] = new int[m];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix_dec[i][j] = matrix_[i][j];

            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix_dec[i][j] -= 1;

            }
        }
        for (int i = 0; i < n; i++)
        {
            delete[]matrix_[i];
        }
        delete[]matrix_;

        matrix_ = matrix_dec;
    }
    void DoubleMatrix::Resize(int n, int m)
    {
        this->n = n;
        this->m = m;
        int** matrix_ = new int* [n];
        for (int i = 0; i < n; i++)
        {
            matrix_[i] = new int[m];
        }
    }


    void DoubleMatrix::change_size_rows(int n_1) {
        int** new_matrix = new int* [n_1];
        /*
          *Allocate memory for the new matrix
          *Allocate memory for the array of pointers
        */

        for (int i = 0; i < n_1; i++)
        {
            new_matrix[i] = new int[m];/*!number of lines, number of pointers*/
        }

        /*!Adding zeros to the end of a string*/
        for (int i = 0; i < n_1; i++) {
            for (int j = 0; j < m; j++) {
                if (i < n)
                    new_matrix[i][j] = matrix_[i][j];
                else
                    new_matrix[i][j] = 0;
            }
        }
        /*!Freeing up memory*/
        for (int i = 0; i < n; i++)
        {
            delete[]matrix_[i];
        }
        delete[]matrix_;
        /*!Assigning a new matrix size from the original*/
        n = n_1;
        matrix_ = new_matrix;
    }
    void DoubleMatrix::change_size_columns(int m_1) {
        int** new_matrix = new int* [n];

        for (int i = 0; i < n; i++)
        {
            new_matrix[i] = new int[m_1];
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m_1; j++) {
                if (j < m)
                    new_matrix[i][j] = matrix_[i][j];
                else
                    new_matrix[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            delete[]matrix_[i];
        }
        delete[]matrix_;
        m = m_1;
        matrix_ = new_matrix;
    }

    bool DoubleMatrix::zero_matrix() // нулевая / ненулевая матрица
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix_[i][j] == 0)
                {
                    r += 1;
                }
            }
        }
        if (r == m * n)
        {
            return true;
        }
        else
        {
            return false;
        }


    }
    bool DoubleMatrix::square_matrix() // проверка на квадртаность матрицы
    {
        if (n == m) {
            return true;
        }
        else {
            return false;
        }
    }
    bool DoubleMatrix::diaginal() // диагональная
    {
        if (n == m) {

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (i != j) {
                        if (matrix_[i][j] == 0)
                        {
                            t = true;
                        }
                        else t = false;
                        break;

                    }
                }
            }
        }
        return t;
    }
    /*!If the opening of the file was successful, first let's count how many numbers are in the file*/
    void DoubleMatrix::file_matrix(string l) {
        ifstream in(l);

        if (in.is_open())
        {
            
            int count = 0;///number of numbers in file
            int temp;///Temporary variable


            while (!in.eof())///run through until we reach the end of the file eof
            {
                in >> temp;///into the void we read the numbers from the file
                count++;
                
            }
            

            
            in.seekg(0, ios::beg);
            in.clear();

            
            int count_space = 0;
            char symbol;
            while (!in.eof())///just in case, the loop is limited to the end of the file
            {
                
                in.get(symbol);
                if (symbol == ' ') count_space++;///if ' ', count_space ++
                if (symbol == '\n') break;///if end file, exit
            }
            
            in.seekg(0, ios::beg);
            in.clear();

            

            int n = count / (count_space + 1);
            int m = count_space + 1;
           

            ///Read matrix at file
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    in >> matrix_[i][j];


          

            in.close();///close file
        }
        else
        {

            cout << "Файл не найден.";
        }
    }
    bool DoubleMatrix::lower_triangular() 
    {
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < m; j++)
                if (matrix_[i][j] != 0)
                    return false;

        return true;

    }
    bool DoubleMatrix::large_triangularl() { 
        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if (matrix_[i][j] != 0)
                    return false;

        return true;


    }
    bool DoubleMatrix::single_matrix() {
        if (n == m) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (i == j && matrix_[i][j] != 1)
                    {
                        return false;
                    }
                    else if (i != j && matrix_[i][j] != 0) {
                        return false;
                    }
                }
            }
            return true;
        }
        return false;
    }
    bool DoubleMatrix::symmetric_matrix()
    {

        if (m == n)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    if (matrix_[i][j] != matrix_[j][i])
                    {
                        a = false;
                        break;
                    }
                if (!a) break;
            }
            return a;
        }
        else return false;
    }

    void DoubleMatrix::removing_the_submatrix() {
        int** matrix_sub = new int* [n];
        for (int i = 0; i < n; i++)
        {
            matrix_sub[i] = new int[m];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix_sub[i][j] = matrix_[i][j];
            }
        }
        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j < m; ++j)
            {
                for (int k = 0; k <= (n - i); ++k)
                {
                    //cout << endl;
                    for (int p = 0; p <= (m - j); ++p)
                    {
                        cout << matrix_sub[k][p] << " ";

                    }
                    cout << endl;
                }
                cout << endl;

            }
            cout << endl;

        }
        for (int i = 0; i < n; i++)
        {
            delete[]matrix_sub[i];
        }
        delete[]matrix_sub;


    }
    
    void DoubleMatrix::transposition()
    {
        int** matrix_transposition = new int* [n];
        for (int i = 0; i < n; i++)
        {
            matrix_transposition[i] = new int[m];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix_transposition[j][i] = matrix_[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            delete[]matrix_[i];
        }
        delete[]matrix_;
        matrix_ = matrix_transposition;
    }
    bool DoubleMatrix::operator ==(DoubleMatrix a)
    {
        int i, j;
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                if (matrix_[i][j] != a.matrix_[i][j])
                    return false;
        return true;
    }

    DoubleMatrix& DoubleMatrix::operator++()
    {
        /**
        * ... Overloading pre-increment
        */
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                matrix_[i][j] = ++matrix_[i][j];
            }
        }
        return *this;
    }

    DoubleMatrix& DoubleMatrix::operator--()
    {
        /**
        * ... Overloading pre-dicrement
        */
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                matrix_[i][j] = --matrix_[i][j];
            }
        }
        return *this;
    }
    DoubleMatrix DoubleMatrix::operator++(int)
    {
        /**
        * ... Overloading post-increment
        */
        
        DoubleMatrix temp = *this;
                          ++(*this);
            return temp;
    }

    DoubleMatrix DoubleMatrix::operator--(int)
    {
        /**
          * ... Overloading post-dicrement ...
          */
          
        DoubleMatrix temp = *this;
        --(*this);

        return temp;
    }
    
  