namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(size_t data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(size_t data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%zu", &data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(size_t data)
{
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
<START>
            myString = new char[data];
<END>
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
}
