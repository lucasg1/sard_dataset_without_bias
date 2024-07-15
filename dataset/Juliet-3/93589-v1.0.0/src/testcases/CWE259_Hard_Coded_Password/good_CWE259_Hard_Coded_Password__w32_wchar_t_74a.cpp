using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t *> passwordMap)
{
    wchar_t * password = passwordMap[2];
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
void FUN0(map<int, wchar_t *> passwordMap);
void FUN2()
{
    wchar_t * password;
    map<int, wchar_t *> passwordMap;
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
    passwordMap[0] = password;
    passwordMap[1] = password;
    passwordMap[2] = password;
    FUN0(passwordMap);
}
} 
