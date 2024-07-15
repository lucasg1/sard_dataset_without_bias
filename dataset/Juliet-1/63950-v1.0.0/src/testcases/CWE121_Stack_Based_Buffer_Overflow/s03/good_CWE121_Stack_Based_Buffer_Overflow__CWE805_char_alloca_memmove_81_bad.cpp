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
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * VAR3 = (char *)ALLOCA(50*sizeof(char));
    char * VAR4 = (char *)ALLOCA(100*sizeof(char));
    data = VAR4;
    data[0] = '\0'; 
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
