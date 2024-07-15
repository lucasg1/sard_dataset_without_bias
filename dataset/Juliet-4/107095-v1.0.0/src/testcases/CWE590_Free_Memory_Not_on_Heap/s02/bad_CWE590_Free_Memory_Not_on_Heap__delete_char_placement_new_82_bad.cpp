namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    {
        char buffer[sizeof(char)];
        char * dataBuffer = new(buffer) char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data)
{
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
}
