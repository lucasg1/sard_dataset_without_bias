namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data)
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
class NAMESPACE0_base
{
public:
    virtual void action(int data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    data = 100-1;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
