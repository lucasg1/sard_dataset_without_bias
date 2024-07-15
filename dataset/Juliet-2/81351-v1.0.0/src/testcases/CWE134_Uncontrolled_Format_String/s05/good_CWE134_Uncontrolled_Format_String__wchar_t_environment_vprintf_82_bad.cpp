namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) = 0;
};
class NAMESPACE0_FUN2 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
class NAMESPACE0_FUN3 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
}
namespace NAMESPACE0
{
void FUN0(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void NAMESPACE0_FUN2::action(wchar_t * data)
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
void FUN1(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
void NAMESPACE0_FUN3::action(wchar_t * data)
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN2;
    baseObject->action(data);
    delete baseObject;
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN3;
    baseObject->action(data);
    delete baseObject;
}
} 
