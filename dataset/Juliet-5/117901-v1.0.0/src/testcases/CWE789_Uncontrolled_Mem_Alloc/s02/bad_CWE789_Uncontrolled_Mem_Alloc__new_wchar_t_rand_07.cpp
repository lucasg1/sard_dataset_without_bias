static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    if(staticFive==5)
    {
        data = rand();
    }
    if(staticFive==5)
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
} 
