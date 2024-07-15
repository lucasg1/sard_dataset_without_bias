namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    NAMESPACE0_FUN0 VAR1(data);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    NAMESPACE0_FUN1 VAR2(data);
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
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(wchar_t * dataCopy)
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
