namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    size_t data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%zu", &data);
    }
    for(j = 0; j < 1; j++)
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
