namespace NAMESPACE0
{
void FUN0()
{
    char data;
    data = ' ';
    data = 2;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char data)
{
    {
        char result = data + 1;
        printHexCharLine(result);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(char data)
{
    if (data < CHAR_MAX)
    {
        char result = data + 1;
        printHexCharLine(result);
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
    virtual void action(char data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(char data);
};
}
