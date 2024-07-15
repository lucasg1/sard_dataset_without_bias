namespace NAMESPACE0
{
void FUN0(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, L"%s", args);
        va_end(args);
        printWLine(dest);
    }
}
void NAMESPACE0_FUN3::action(wchar_t * data) const
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
void FUN1(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, data, args);
        va_end(args);
        printWLine(dest);
    }
}
void NAMESPACE0_FUN2::action(wchar_t * data) const
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
        if (100-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
        }
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN3();
    baseObject.action(data);
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
