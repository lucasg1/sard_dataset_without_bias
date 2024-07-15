namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * VAR2 = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    data = VAR3;
    data[0] = L'\0'; 
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t * data)
{
    {
        wchar_t source[10+1] = SRC_STRING;
        wcscpy(data, source);
        printWLine(data);
    }
}
}
