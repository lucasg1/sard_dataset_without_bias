namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        if (250-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(250-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data)
{
<START>
    PUTENV(data);
<END>
}
}
