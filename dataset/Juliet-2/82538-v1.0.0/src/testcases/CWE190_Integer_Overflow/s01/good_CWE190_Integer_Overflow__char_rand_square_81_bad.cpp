namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(char data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    char data;
    data = ' ';
    data = 2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char data) const
{
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(char data) const
{
    if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
    {
        char result = data * data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
