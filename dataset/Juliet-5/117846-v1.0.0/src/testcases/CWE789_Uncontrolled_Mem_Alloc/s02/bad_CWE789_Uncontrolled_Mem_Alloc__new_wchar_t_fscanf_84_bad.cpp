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
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
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
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
<START>
            myString = new wchar_t[data];
<END>
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
}
