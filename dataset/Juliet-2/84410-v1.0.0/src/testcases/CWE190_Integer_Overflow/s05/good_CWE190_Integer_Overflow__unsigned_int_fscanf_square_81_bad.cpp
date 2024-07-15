namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(unsigned int data) const
{
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    data = 0;
    data = 2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
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
void NAMESPACE0_FUN1::action(unsigned int data) const
{
    if (abs((long)data) <= (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
