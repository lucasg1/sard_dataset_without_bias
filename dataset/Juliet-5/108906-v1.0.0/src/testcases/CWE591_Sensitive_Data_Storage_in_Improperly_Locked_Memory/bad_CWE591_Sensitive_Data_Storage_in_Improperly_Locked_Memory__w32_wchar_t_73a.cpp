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
        free(password);
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
    password = L"";
    password = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
<START>
    wcscpy(password, L"Password1234!");
<END>
    passwordList.push_back(password);
    passwordList.push_back(password);
    passwordList.push_back(password);
    FUN0(passwordList);
}
} 
