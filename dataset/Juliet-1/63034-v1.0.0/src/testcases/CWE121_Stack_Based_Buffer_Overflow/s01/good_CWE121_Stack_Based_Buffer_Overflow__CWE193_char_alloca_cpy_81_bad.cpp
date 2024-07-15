namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data) const
{
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
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
void FUN0()
{
    char * data;
    char * VAR3 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR4 = (char *)ALLOCA((10+1)*sizeof(char));
    data = VAR4;
    data[0] = '\0'; 
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
