#include "pch.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"
  ::testing::AssertionResult sravn_matr(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\input1.txt");
      
      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\output1.txt");
      if(matrix==matrix2)
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult create_lower_triang(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);
      
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\input2.txt");

     
      if (matrix.lower_triangular())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult create_lower_triang2(bool foo3)
  {
      int n = 5, m = 5;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\input4.txt");


      if (matrix.lower_triangular())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }


  ::testing::AssertionResult create_large_triang2(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\input3.txt");


      if (matrix.large_triangularl())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }
  ::testing::AssertionResult create_large_triang3(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\input2.2.txt");


      if (matrix.large_triangularl())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_zero_matrix(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputzero.txt");


      if (matrix.zero_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_zero_matrix1(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputzero1.txt");


      if (matrix.zero_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_zero_matrix2(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputzero2.txt");


      if (matrix.zero_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_single_matrix(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsingle.txt");


      if (matrix.single_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_single_matrix1(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsingle1.txt");


      if (matrix.single_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult check_single_matrix2(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsingle2.txt");


      if (matrix.single_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_symmetric_matrix(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsymmetric.txt");


      if (matrix.symmetric_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_symmetric_matrix1(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsymmetric1.txt");


      if (matrix.symmetric_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }
  
  ::testing::AssertionResult check_symmetric_matrix2(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsymmetric2.txt");


      if (matrix.symmetric_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult check_diagonal_matrix(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputdiagonal.txt");


      if (matrix.diaginal())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult check_diagonal_matrix1(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputdiagonal1.txt");


      if (matrix.diaginal())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult check_diagonal_matrix2(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputdiagonal2.txt");


      if (matrix.diaginal())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }
  ::testing::AssertionResult sravn_matr_transp(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputtransp.txt");

      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\outputtransp.txt");
      matrix.transposition();
      if(matrix == matrix2)
         return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }
  ::testing::AssertionResult sravn_matr_transp1(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputtransp3.txt");

      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\outputtransp3.txt");
      matrix.transposition();
      if (matrix == matrix2)
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult sravn_matr_transp2(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputtransp5.txt");

      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\outtransp5.txt");
      matrix.transposition();
      if (matrix == matrix2)
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult sravn_matr_dec(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputdec.txt");

      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\outputdec.txt");
      matrix.Decrease_elements_arr();
      if (matrix == matrix2)
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }
  ::testing::AssertionResult sravn_matr_dec2(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputdec2.txt");

      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\outputdec2.txt");
      matrix.Decrease_elements_arr();
      if (matrix == matrix2)
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult sravn_matr_inc(bool foo3)
  {
      int n = 3, m = 3;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputinc.txt");

      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\outputinc.txt");
      matrix.Increase_elements_arr();
      if (matrix == matrix2)
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult sravn_matr_inc2(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);
      DoubleMatrix matrix2(n, m);
      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputinc2.txt");

      matrix2.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\outputinc2.txt");
      matrix.Increase_elements_arr();
      if (matrix == matrix2)
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult check_single_matrix3(bool foo3)
  {
      int n = 5, m = 5;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsingle5.txt");


      if (matrix.single_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_diagonal_matrix3(bool foo3)
  {
      int n = 5, m = 5;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputdiagonal3.txt");


      if (matrix.diaginal())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }

  ::testing::AssertionResult check_zero_matrix3(bool foo3)
  {
      int n = 5, m = 5;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputzero3.txt");


      if (matrix.zero_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult create_lower_triang3(bool foo3)
  {
      int n = 4, m = 4;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputlower3.txt");


      if (matrix.lower_triangular())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult create_large_triang4(bool foo3)
  {
      int n = 5, m = 5;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputlarge3.txt");


      if (matrix.large_triangularl())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;

  }

  ::testing::AssertionResult check_square_matrix(bool foo3)
  {
      int n = 2, m = 2;
      DoubleMatrix matrix(n, m);

      matrix.file_matrix("D:\\ПИВИС 1 лаба\\1 лаба\\ConsoleApplication1\\test\\inputsquare4.txt");


      if (matrix.square_matrix())
          return ::testing::AssertionSuccess();
      else
          return ::testing::AssertionFailure() << foo3;
  }


 
  
  TEST(matr, Test1)
  {
      EXPECT_TRUE(sravn_matr(true));
  }



  TEST(low_tring, Test1)
  {
      EXPECT_TRUE(create_lower_triang(true));
  }

  TEST(large_tring2, Test2)
  {
      EXPECT_TRUE(create_large_triang2(true));
  }

  TEST(large_tring3, Test3)
  {
      EXPECT_TRUE(create_large_triang3(true));
  }

  TEST(low_tring2, Test4)
  {
      EXPECT_TRUE(create_lower_triang2(true));
  }
  
  TEST(zero, Test5)
  {
      EXPECT_TRUE(check_zero_matrix(true));
  }

  TEST(zero, Test6)
  {
      EXPECT_TRUE(check_zero_matrix1(true));
  }

  TEST(zero, Test7)
  {
      EXPECT_TRUE(check_zero_matrix2(true));
  }

  TEST(low_tring, Test8)
  {
      EXPECT_TRUE(check_single_matrix(true));
  }

  TEST(single, Test9)
  {
      EXPECT_TRUE(check_single_matrix1(true));
  }

  TEST(single, Test10)
  {
      EXPECT_TRUE(check_single_matrix2(true));
  }
  
  TEST(symmetric, Test11)
  {
      EXPECT_TRUE(check_symmetric_matrix(true));
  }

  TEST(symmetric1, Test12)
  {
      EXPECT_TRUE(check_symmetric_matrix1(true));
  }

  TEST(symmetric2, Test13)
  {
      EXPECT_TRUE(check_symmetric_matrix2(true));
  }

  TEST(diagonal, Test14)
  {
      EXPECT_TRUE(check_diagonal_matrix(true));
  }

  TEST(diagonal1, Test15)
  {
      EXPECT_TRUE(check_diagonal_matrix1(true));
  }

  TEST(diagonal2, Test16)
  {
      EXPECT_TRUE(check_diagonal_matrix2(true));
  }

  TEST(transp, Test17) 
  {
      EXPECT_TRUE(sravn_matr_transp(true));
  }
  TEST(transp1, Test18)
  {
      EXPECT_TRUE(sravn_matr_transp1(true));
  }

  TEST(transp2, Test19)
  {
      EXPECT_TRUE(sravn_matr_transp2(true));
  }

  TEST(decrease, Test20)
  {
      EXPECT_TRUE(sravn_matr_dec(true));
  }

  TEST(decrease2, Test21)
  {
      EXPECT_TRUE(sravn_matr_dec2(true));
  }

  TEST(increase, Test22)
  {
      EXPECT_TRUE(sravn_matr_inc(true));
  }

  TEST(increase2, Test23)
  {
      EXPECT_TRUE(sravn_matr_inc2(true));
  }

  TEST(single3, Test24)
  {
      EXPECT_TRUE(check_single_matrix3(true));
  }
  TEST(diagonal3, Test25)
  {
      EXPECT_TRUE(check_diagonal_matrix3(true));
  }

  TEST(zero3, Test26)
  {
      EXPECT_TRUE(check_zero_matrix3(true));
  }

  TEST(low_tring3, Test27)
  {
      EXPECT_TRUE(create_lower_triang3(true));
  }

  TEST(low_tring4, Test28)
  {
      EXPECT_TRUE(create_large_triang4(true));
  }
   
  TEST(square, Test29)
  {
      EXPECT_TRUE(check_square_matrix(true));
  }




  

