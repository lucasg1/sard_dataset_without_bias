namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data) const
{
    {
        int result = data * data;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int data) const
{
    if (abs((long)data) <= (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(int data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = 0;
    data = 2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
