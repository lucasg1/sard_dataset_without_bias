namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[10+1];
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data) const
{
    {
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
        delete [] data;
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
