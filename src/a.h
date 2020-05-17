#ifndef __A__H__
#define __A__H__

class A
{
public:
    A();
    A(A &&) = default;
    A(const A &) = default;
    A &operator=(A &&) = default;
    A &operator=(const A &) = default;
    ~A();

private:
    
};

#endif  //!__A__H__
