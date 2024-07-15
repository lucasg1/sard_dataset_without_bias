namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)malloc((10+1)*sizeof(char));
    if (data == NULL) {exit(-1);}
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
        free(data);
    }
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
