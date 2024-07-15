namespace NAMESPACE0
{
void FUN0(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}
void NAMESPACE0_FUN2::action(wchar_t * data) const
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) const = 0;
};
class NAMESPACE0_FUN2 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data) const;
};
class NAMESPACE0_FUN3 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data) const;
};
}
namespace NAMESPACE0
{
void FUN1(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, L"%s", args);
        va_end(args);
    }
}
void NAMESPACE0_FUN3::action(wchar_t * data) const
{
    FUN1(data, data);
}
}
namespace NAMESPACE0
{
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN2();
    baseObject.action(data);
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN3();
    baseObject.action(data);
}
} 
