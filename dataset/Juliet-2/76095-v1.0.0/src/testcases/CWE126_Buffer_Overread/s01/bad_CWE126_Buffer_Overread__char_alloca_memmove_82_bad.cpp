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
    char * VAR2 = (char *)ALLOCA(50*sizeof(char));
    char * VAR3 = (char *)ALLOCA(100*sizeof(char));
    memset(VAR2, 'A', 50-1); 
    VAR2[50-1] = '\0'; 
    memset(VAR3, 'A', 100-1); 
    VAR3[100-1] = '\0'; 
    data = VAR2;
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
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memmove(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}
}
