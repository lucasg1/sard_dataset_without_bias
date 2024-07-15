namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(int data) const
{
    if (data > INT_MIN)
    {
        int result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data) const
{
    {
        int result = data - 1;
        printIntLine(result);
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
    data = -2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
