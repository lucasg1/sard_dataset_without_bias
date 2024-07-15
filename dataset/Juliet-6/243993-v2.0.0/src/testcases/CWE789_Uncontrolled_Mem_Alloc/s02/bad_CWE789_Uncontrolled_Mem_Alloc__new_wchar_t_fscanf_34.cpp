namespace NAMESPACE0
{
typedef union
{
    size_t unionFirst;
    size_t unionSecond;
} unionType;
void FUN0()
{
    size_t data;
    unionType myUnion;
    data = 0;
    fscanf(stdin, "%zu", &data);
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
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
