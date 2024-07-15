namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t * data) const
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
}
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
void FUN0()
{
    wchar_t * data;
    wchar_t VAR3[50];
    wchar_t VAR4[100];
    wmemset(VAR3, L'A', 50-1); 
    VAR3[50-1] = L'\0'; 
    wmemset(VAR4, L'A', 100-1); 
    VAR4[100-1] = L'\0'; 
    data = VAR4;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
