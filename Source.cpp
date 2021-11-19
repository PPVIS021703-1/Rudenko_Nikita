#include "Header.h"
int main()
{
    
    srand(time(NULL));
    setlocale(0, "");
    int n, m;
    bool exit = false;
    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;
    DoubleMatrix matrix(n, m);
    DoubleMatrix matrix2(n, m);
    //matrix.file_matrix();
    matrix.create_matrix();
    //matrix2.create_matrix();
    matrix.print();
    //matrix2.print();

    //if (matrix == matrix2)
      //  cout << "True\n";

    //else cout << "False\n";
    while (true) {
        cout << "\nВведите 1 для изменения числа строк и столбцов: \nВведите 2 для загрузки матрицы из файла: \nВведите 3 для извлечение подматрицы заданного размера: \nВведите 4 для проверки тип матрицы: \nВведите 5 для транспонирование матрицы: \nВведите 6 для увеличения каждого элемента на 1: \nВведите 7 для уменьшения каждого элемента матрицы на 1: \nВведите 8 для выхода: \n";
        int kod;
        cin >> kod;
        switch (kod) {
        case 1:

            int n1, m1;
            cin >> n1;
            matrix.change_size_rows(n1);
            matrix.print();
            cin >> m1;
            matrix.change_size_columns(m1);
            matrix.print();
            break;
        case 2:
            //matrix.create_file_matrix();
            //matrix.print();
            matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\tests\\input1.txt");
            break;
        case 3:

            matrix.removing_the_submatrix();
            break;
        case 4:
            matrix.print();

            if (matrix.square_matrix())
            {
                cout << "Матрица квадратная" << endl;
            }
            else
            {
                cout << "Матрица не квадратная" << endl;
            }

            if (matrix.diaginal())
            {
                cout << "Матрица диагональная" << endl;
            }
            else
            {
                cout << "Матрица не диагональная" << endl;
            }

            if (matrix.zero_matrix())
            {
                cout << "Матрица нулевая " << endl;
            }
            else
            {
                cout << "Матрица не нулевая" << endl;
            }

            if (matrix.large_triangularl())
            {
                cout << "Матрица верхняя треугольная" << endl;
            }
            else
            {
                cout << "Матрица не верхняя треугольная" << endl;
            }

            if (matrix.single_matrix())
            {
                cout << "Матрица единичная" << endl;
            }
            else
            {
                cout << "Матрица не единичная" << endl;
            }

            if (matrix.symmetric_matrix())
            {
                cout << "Матрица cимметрическая" << endl;
            }
            else
            {
                cout << "Матрица не симметрическая" << endl;
            }



            if (matrix.lower_triangular())
            {
                cout << "Матрица нижняя треугольная " << endl;
            }
            else
            {
                cout << "Матрица не нижняя треугольная" << endl;
            }
            break;
        case 5:

            matrix.transposition();
            matrix.print();
            break;
        case 6:
            cout << "Введите 1 для преинкремента или введите 2 для постинкремента"<<endl;
            int option;
            cin >> option;
            if (option == 1) {
                cout << "pre_inc\n";
                ++matrix;
                matrix.print();
            }
            if(option == 2) 
            {
                cout << "post_inc\n";
                matrix++;
                matrix.print();
            }

           /* matrix.Increase_elements_arr();
            matrix.print();*/
            break;
        case 7:
            int option_dec;
            cout << "Введите 1 для прединкремента или введите 2 для декремента";
            cin >> option_dec;
            if (option_dec == 1) {
                cout << "pre_dec\n";
                --matrix;
                matrix.print();
            }
            if (option_dec == 2) {
                cout << "post_dec\n";
                matrix--;
                matrix.print();
            }
            /*matrix.Decrease_elements_arr();
            matrix.print();*/
            break;
        case 8:
            cout << "Выход.\n";

            return 1;
        }
    }

    system("pause");
    cin.get();
    return 0;
}