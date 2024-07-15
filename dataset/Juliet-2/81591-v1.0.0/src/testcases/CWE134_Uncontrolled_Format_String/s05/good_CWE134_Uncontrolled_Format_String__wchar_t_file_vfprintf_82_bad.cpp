namespace NAMESPACE0
{
void FUN0(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, L"%s", args);
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
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN2;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void FUN4(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}
void NAMESPACE0_FUN1::action(wchar_t * data)
{
    FUN4(data, data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) = 0;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
class NAMESPACE0_FUN2 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
}
