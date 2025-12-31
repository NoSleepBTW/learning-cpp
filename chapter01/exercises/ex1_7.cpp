#include <iostream>

int main()
{
	/* This is the first comment. If we try to nest another
     * /* like this */ The outer comment ends at the first */
     * which causes a compile error.
     */
    
    std::cout << "This won't compile!" << std::endl;
    return 0;
}
