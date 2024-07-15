namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t * dataCopy)
{
    data = dataCopy;
    wcscpy(data, L"fixedstringtest");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        wchar_t dest[100] = L"";
        SNPRINTF(dest, 100-1, data);
        printWLine(dest);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    NAMESPACE0_FUN0 VAR2(data);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    NAMESPACE0_FUN1 VAR3(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(wchar_t * dataCopy)
{
    data = dataCopy;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
        wchar_t dest[100] = L"";
        SNPRINTF(dest, 100-1, L"%s", data);
        printWLine(dest);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(wchar_t * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    wchar_t * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(wchar_t * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    wchar_t * data;
};
}
