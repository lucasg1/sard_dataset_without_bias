namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * password) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * password) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * password) const
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
        free(password);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char * password;
    password = "";
    password = (char *)malloc(100*sizeof(char));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
    if(!VirtualLock(password, 100*sizeof(char)))
    {
        printLine("Memory could not be locked");
        exit(1);
    }
    strcpy(password, "Password1234!");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(password);
}
} 
