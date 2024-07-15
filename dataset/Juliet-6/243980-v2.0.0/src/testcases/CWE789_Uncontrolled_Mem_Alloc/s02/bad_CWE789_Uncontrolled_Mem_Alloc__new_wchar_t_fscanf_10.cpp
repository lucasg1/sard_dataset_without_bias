namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    if(globalTrue)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(globalTrue)
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
