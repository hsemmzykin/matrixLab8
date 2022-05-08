#include <iostream>

/*
 * WHAT'S NEW IN C++11
 *  __cplusplus
 * auto
 * range_based for
 * >> - new limitations
 * default, delete -- in class declaration
 * copy/move
 * enum class
 * constexpr
 * decltype
 * std::initializer_list
 * сужение типов
 * delegating constructors
 * initializing class members
 * унаследованные конструкторы
 * static_assert
 * long long -- 64bits
 * nullptr
 * suffix type return value
 * templates with variable number of parametersa
 * унифицированная инициализация
 * right-hand side reference (rhs&)
 * сырые строки -- regex
 * пользовательские литералы
 * attributes ([[]])
 * выравнивание
 * std::chrono
 */

/*
 * calling conventions:
 * stack (LEFT - in c/c++ - and RIGHT) and registers (SysV and fastcall)
 */

//MOVE SEMANTICS
/*
 * && - universal ref -- it automatically chooses whether we are able to move or use &
 */
/*
 * std::move - it prepares an object for being moved -- creates a universal reference
 *
 * std::forward -- first it checks whether an object can be converted to a rvalue reference and if it's possible -- does it
 *
 */





/*
 * continuance of move-semantics
 * &&
 */
class A{
    std::string s;
public:
    A (const std::string& s) : s(s) {};
    A (const std::string && s) : s(std::move(s)) {};

};




/*
 * C++11/14 pointers
 *
 * std::unique_ptr -- template type, movable, we can use functor in order to call smt b4 deleting this pointer
 * it is recommended to use this pointer in all cases (mainly when you return from function)
 * std::shared_ptr -- while anyone is using this pointer, it is not being deleted
 * std::weak_ptr -- allows you to use it like as a usual pointer but if anyone else decides to use it then it acts like
 * a shared_ptr
 */
/*
 * override
 * final
 *
 * these are keywords for virtual functions
 */
class Z{
public:
    virtual void f();
    virtual void g() const;
    void h();
};
class V : public Z{
public:
    void f() final;
    void g() const override;
    void h();
};

int main(){
    for (auto x : {1, 2, 3}){
        std::cout << x;
    }
}