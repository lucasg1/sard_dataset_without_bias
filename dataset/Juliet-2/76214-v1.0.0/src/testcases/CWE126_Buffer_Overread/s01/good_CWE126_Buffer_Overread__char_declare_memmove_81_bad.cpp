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
        memmove(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
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
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
