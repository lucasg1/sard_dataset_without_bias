namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(wchar_t * password)
{
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        if (LogonUserW(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &pHandle) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(pHandle);
        }
        else
        {
            printLine("Unable to login.");
        }
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * password) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(wchar_t * password);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    {
        size_t passwordLen = 0;
        if (fgetws(password, 100, stdin) == NULL)
        {
            printLine("fgetws() failed");
            password[0] = L'\0';
        }
        passwordLen = wcslen(password);
        if (passwordLen > 0)
        {
            password[passwordLen-1] = L'\0';
        }
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(password);
    delete baseObject;
}
} 
