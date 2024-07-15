namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t * data)
{
    wprintf(data);
}
}
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
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(wchar_t * data)
{
    wprintf(L"%s\n", data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 
