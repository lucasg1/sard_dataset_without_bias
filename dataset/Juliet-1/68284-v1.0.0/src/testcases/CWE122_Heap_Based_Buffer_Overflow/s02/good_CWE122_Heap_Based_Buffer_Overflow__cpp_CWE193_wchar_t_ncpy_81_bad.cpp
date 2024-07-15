namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t * data) const
{
    {
        wchar_t source[10+1] = SRC_STRING;
        wcsncpy(data, source, wcslen(source) + 1);
        printWLine(data);
        delete [] data;
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[10+1];
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
