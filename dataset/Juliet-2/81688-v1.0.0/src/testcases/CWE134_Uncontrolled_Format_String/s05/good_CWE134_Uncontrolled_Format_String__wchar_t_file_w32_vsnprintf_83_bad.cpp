namespace NAMESPACE0
{
NAMESPACE0_FUN3::NAMESPACE0_FUN3(wchar_t * dataCopy)
{
    data = dataCopy;
    {
        size_t dataLen = wcslen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgetws(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgetws() failed");
                    data[dataLen] = L'\0';
                }
                fclose(pFile);
            }
        }
    }
}
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
NAMESPACE0_FUN3::~NAMESPACE0_FUN3()
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(wchar_t * dataCopy)
{
    data = dataCopy;
    wcscpy(data, L"fixedstringtest");
}
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
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
{
    FUN1(data, data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN2
{
public:
    NAMESPACE0_FUN2(wchar_t * dataCopy);
    ~NAMESPACE0_FUN2();
private:
    wchar_t * data;
};
class NAMESPACE0_FUN3
{
public:
    NAMESPACE0_FUN3(wchar_t * dataCopy);
    ~NAMESPACE0_FUN3();
private:
    wchar_t * data;
};
}
namespace NAMESPACE0
{
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    NAMESPACE0_FUN2 VAR4(data);
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    NAMESPACE0_FUN3 VAR5(data);
}
} 
