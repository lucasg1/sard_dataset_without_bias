namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char * passwordCopy);
    ~NAMESPACE0_FUN0();
private:
    char * password;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * passwordCopy)
{
    password = passwordCopy;
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
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
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
namespace NAMESPACE0
{
void FUN0()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    NAMESPACE0_FUN0 VAR3(password);
}
} 
