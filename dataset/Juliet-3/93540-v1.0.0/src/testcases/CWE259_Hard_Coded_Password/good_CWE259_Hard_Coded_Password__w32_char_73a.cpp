using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> passwordList)
{
    char * password = passwordList.back();
    {
        HANDLE pHandle;
        char * username = "User";
        char * domain = "Domain";
        if (LogonUserA(
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
void FUN0(list<char *> passwordList);
void FUN2()
{
    char * password;
    list<char *> passwordList;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        size_t passwordLen = 0;
        if (fgets(password, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            password[0] = '\0';
        }
        passwordLen = strlen(password);
        if (passwordLen > 0)
        {
            password[passwordLen-1] = '\0';
        }
    }
    passwordList.push_back(password);
    passwordList.push_back(password);
    passwordList.push_back(password);
    FUN0(passwordList);
}
} 
