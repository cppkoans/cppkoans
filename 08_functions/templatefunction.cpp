// Overloaded functions sometimes contain exactly the same code.
// The only differece is in the parameter list.
// It is unnecessary overhead to have to write the same code over and over again

#include <iostream>

template <typename T> T larger(T a, T b);   // function template prototype

// This fixes the dangerous memory address comparison error by specializing
// our function template when dealing with pointer comparisons
template <> long* larger<long*>(long* a, long* b)
{
    return *a > *b ? a : b;
}

int main()
{
    // Using our template function, we can generate functions which handles
    // the correct type at compile-time.

    double a = 1.5, b = 2.5;
    std::cout << "Larger of " << a << " and " << b << " is " << larger(a, b) << std::endl;

    int c = 1, d = 2;
    std::cout << "Larger of " << c << " and " << d << " is " << larger(c, d) << std::endl;

    long e {8L}, f {9L};
    std::cout << "Larger of " << e << " and " << f << " is " << larger(e, f) << std::endl;

    // To handle arguments of different types, we have to explicitly cast the type-to-use
    // types so that they are both of the same types.
    std::cout << "Larger of " << e << " and " << b << " is " << larger<double>(e, b) << std::endl;

    // This will not compile
    //std::cout << "Larger of " << e << " and " << b << " is " << larger(e, b) << std::endl;

    //templatefunction.cpp:28:65: error: no matching function for call to 'larger'
            //std::cout << "Larger of " << e << " and " << b << " is " << larger(e, b) << std::endl;
                                                                    //^~~~~~
                                                                        //templatefunction.cpp:7:25: note: candidate template ignored: deduced conflicting types for
                                                                              //parameter 'T' ('long' vs. 'double')
                                                                              //template <typename T> T larger(T a, T b);   // function template prototype
                                                                                            //^
                                                                                                //1 error generated.

    // function template specialization
    // This is wrong if we don't do template specialization because
    // it will compare memory address!!!
    std::cout << "Larger of " << e << " and " << f << " is " << *larger(&e, &f) << std::endl;

    return 0;
}

// Actual template
template <typename T>
T larger(T a, T b)
{
    return a > b ? a : b;
}
