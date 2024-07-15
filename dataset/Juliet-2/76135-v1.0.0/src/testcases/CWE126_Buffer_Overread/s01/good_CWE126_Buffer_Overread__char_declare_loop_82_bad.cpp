namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data)
{
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
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
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char VAR3[50];
    char VAR4[100];
    memset(VAR3, 'A', 50-1); 
    VAR3[50-1] = '\0'; 
    memset(VAR4, 'A', 100-1); 
    VAR4[100-1] = '\0'; 
    data = VAR4;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
