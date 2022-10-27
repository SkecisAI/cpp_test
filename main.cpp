#include <iostream>
#include <utility>

#include "Learning/move_test.h"
#include "Learning/array_test.h"
#include "Learning/sstream_test.h"


int main(void)
{
	sstream_test();
	return 0;
}

/**
输出：
Pass lvalue: 左值传参，右值引用形参是左值
             normal pass:call lvalue: 12 调用左值函数
          std::move pass:call rvalue: 12 move强转为右值
       std::forward pass:call lvalue: 12 左值forward还是左值
   std::static_cast pass:call lvalue: 12 
Pass rvalue: 右值传参，右值引用形参是右值
             normal pass:call lvalue: 12 
          std::move pass:call rvalue: 12
       std::forward pass:call rvalue: 12
   std::static_cast pass:call rvalue: 12
**/
