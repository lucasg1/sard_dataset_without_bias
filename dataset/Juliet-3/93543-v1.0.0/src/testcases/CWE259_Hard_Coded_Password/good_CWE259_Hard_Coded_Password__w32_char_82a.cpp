namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * password) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * password);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * password)
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(password);
    delete baseObject;
}
} 
