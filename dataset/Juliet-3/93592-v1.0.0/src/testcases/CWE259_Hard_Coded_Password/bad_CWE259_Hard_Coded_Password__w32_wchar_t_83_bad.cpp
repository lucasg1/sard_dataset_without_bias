namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(wchar_t * passwordCopy);
    ~NAMESPACE0_FUN0();
private:
    wchar_t * password;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    NAMESPACE0_FUN0 VAR2(password);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t * passwordCopy)
{
    password = passwordCopy;
<START>
    wcscpy(password, PASSWORD);
<END>
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
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
