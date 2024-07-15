namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data)
{
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        delete [] data;
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
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
