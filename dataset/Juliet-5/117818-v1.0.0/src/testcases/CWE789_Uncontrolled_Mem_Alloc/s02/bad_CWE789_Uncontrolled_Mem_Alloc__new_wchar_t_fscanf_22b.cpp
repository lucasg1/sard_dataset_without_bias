namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(size_t data);
void FUN1()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(size_t data)
{
    if(VAR1)
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
