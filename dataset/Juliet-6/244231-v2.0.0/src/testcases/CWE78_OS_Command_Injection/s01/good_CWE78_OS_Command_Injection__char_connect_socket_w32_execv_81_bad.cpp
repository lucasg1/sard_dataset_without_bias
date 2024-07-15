namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data) const
{
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        EXECV(COMMAND_INT_PATH, args);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
