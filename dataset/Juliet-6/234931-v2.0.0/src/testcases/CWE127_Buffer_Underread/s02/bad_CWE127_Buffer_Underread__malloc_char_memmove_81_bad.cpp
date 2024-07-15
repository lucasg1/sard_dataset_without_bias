namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data) const
{
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        memmove(dest, data, 100*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}
}
