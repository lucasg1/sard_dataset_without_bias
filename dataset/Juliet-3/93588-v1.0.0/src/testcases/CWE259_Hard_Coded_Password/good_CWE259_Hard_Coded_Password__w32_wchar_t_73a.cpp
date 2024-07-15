using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> passwordList)
{
    wchar_t * password = passwordList.back();
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
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<wchar_t *> passwordList);
void FUN2()
{
    wchar_t * password;
    list<wchar_t *> passwordList;
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
    passwordList.push_back(password);
    passwordList.push_back(password);
    passwordList.push_back(password);
    FUN0(passwordList);
}
} 
