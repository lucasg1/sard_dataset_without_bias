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
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = '\0'; 
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
    data = NULL;
    data = new char[100];
    data[0] = '\0'; 
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
