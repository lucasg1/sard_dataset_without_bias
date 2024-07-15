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
void FUN0()
{
    char * password;
    password = "";
    NAMESPACE0_FUN0 VAR2(password);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * passwordCopy)
{
    password = passwordCopy;
    password = (char *)malloc(100*sizeof(char));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
<START>
    strcpy(password, "Password1234!");
<END>
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
        free(password);
    }
}
}
