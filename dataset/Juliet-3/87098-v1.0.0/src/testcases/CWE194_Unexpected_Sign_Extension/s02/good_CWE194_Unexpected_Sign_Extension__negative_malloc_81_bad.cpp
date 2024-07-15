namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(short data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(short data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(short data) const
{
    if (data < 100)
    {
        char * dataBuffer = (char *)malloc(data);
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    data = 100-1;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
