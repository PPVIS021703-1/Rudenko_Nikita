#include "Header.h"
int main()
{
    
    srand(time(NULL));
    setlocale(0, "");
    int n, m;
    bool exit = false;
    cout << "������� ���������� ����� �������: ";
    cin >> n;
    cout << "������� ���������� �������� �������: ";
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
        cout << "\n������� 1 ��� ��������� ����� ����� � ��������: \n������� 2 ��� �������� ������� �� �����: \n������� 3 ��� ���������� ���������� ��������� �������: \n������� 4 ��� �������� ��� �������: \n������� 5 ��� ���������������� �������: \n������� 6 ��� ���������� ������� �������� �� 1: \n������� 7 ��� ���������� ������� �������� ������� �� 1: \n������� 8 ��� ������: \n";
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
            matrix.file_matrix("D:\\����� 1 ����\\1 ����\\ConsoleApplication1\\tests\\input1.txt");
            break;
        case 3:

            matrix.removing_the_submatrix();
            break;
        case 4:
            matrix.print();

            if (matrix.square_matrix())
            {
                cout << "������� ����������" << endl;
            }
            else
            {
                cout << "������� �� ����������" << endl;
            }

            if (matrix.diaginal())
            {
                cout << "������� ������������" << endl;
            }
            else
            {
                cout << "������� �� ������������" << endl;
            }

            if (matrix.zero_matrix())
            {
                cout << "������� ������� " << endl;
            }
            else
            {
                cout << "������� �� �������" << endl;
            }

            if (matrix.large_triangularl())
            {
                cout << "������� ������� �����������" << endl;
            }
            else
            {
                cout << "������� �� ������� �����������" << endl;
            }

            if (matrix.single_matrix())
            {
                cout << "������� ���������" << endl;
            }
            else
            {
                cout << "������� �� ���������" << endl;
            }

            if (matrix.symmetric_matrix())
            {
                cout << "������� c�������������" << endl;
            }
            else
            {
                cout << "������� �� ��������������" << endl;
            }



            if (matrix.lower_triangular())
            {
                cout << "������� ������ ����������� " << endl;
            }
            else
            {
                cout << "������� �� ������ �����������" << endl;
            }
            break;
        case 5:

            matrix.transposition();
            matrix.print();
            break;
        case 6:
            cout << "������� 1 ��� ������������� ��� ������� 2 ��� ��������������"<<endl;
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
            cout << "������� 1 ��� �������������� ��� ������� 2 ��� ����������";
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
            cout << "�����.\n";

            return 1;
        }
    }

    system("pause");
    cin.get();
    return 0;
}