using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> passwordMap)
{
    char * password = passwordMap[2];
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
void FUN0(map<int, char *> passwordMap);
void FUN2()
{
    char * password;
    map<int, char *> passwordMap;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
<START>
    strcpy(password, PASSWORD);
<END>
    passwordMap[0] = password;
    passwordMap[1] = password;
    passwordMap[2] = password;
    FUN0(passwordMap);
}
} 
