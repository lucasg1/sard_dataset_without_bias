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
void FUN0()
{
    size_t data;
    data = 0;
    NAMESPACE0_FUN0 VAR2(data);
}
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
            myString = (char *)malloc(data*sizeof(char));
<END>
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
}
