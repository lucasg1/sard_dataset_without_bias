namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(unsigned int data) const
{
    if (data > 0)
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(unsigned int data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(unsigned int data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(unsigned int data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    data = 0;
    data = -2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 0;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(unsigned int data) const
{
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
}
