namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    size_t &dataRef = data;
    data = 0;
    data = rand();
    {
        size_t data = dataRef;
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
