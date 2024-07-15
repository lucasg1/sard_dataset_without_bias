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
        data = dataBuffer;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data)
{
    {
        char dest[100*2];
        memset(dest, 'C', 100*2-1); 
        dest[100*2-1] = '\0'; 
        strcpy(dest, data);
        printLine(dest);
    }
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
