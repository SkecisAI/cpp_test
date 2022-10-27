template<typename T>
void reference(T& v)
{
	std::cout << "call lvalue: " << v << std::endl;
}

template<typename T>
void reference(T&& v)
{
	std::cout << "call rvalue: " << v << std::endl;
}

template<typename T>
void pass_var(T&& v)
{
  // 右值引用是一个左值，仅在实际参数为右值时才是右值
	std::cout << "             normal pass:";
	reference(v);
	std::cout << "          std::move pass:";
	reference(std::move(v));
	std::cout << "       std::forward pass:";
	reference(std::forward<T>(v));
	std::cout << "   std::static_cast pass:";
	reference(static_cast<T&&>(v));
}

// 测试用例
void move_test()
{
    std::cout << "Pass lvalue: " << std::endl;
	int v = 12;
	pass_var(v);
	std::cout << "Pass rvalue: " << std::endl;
    int&& r = 12;
	pass_var(r);
}