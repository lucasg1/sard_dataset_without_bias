namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(size_t dataCopy);
    ~NAMESPACE0_FUN0();
private:
    size_t data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(size_t dataCopy)
{
    data = dataCopy;
    fscanf(stdin, "%ud", &data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
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
