namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char data) const
{
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
}
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
    data = -2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(char data) const
{
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
}
