namespace NAMESPACE0
{
void FUN0(size_t dataArray[]);
void FUN1()
{
    size_t data;
    size_t dataArray[5];
    data = 0;
    data = 20;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(size_t dataArray[]);
void FUN3()
{
    size_t data;
    size_t dataArray[5];
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = strtoul(inputBuffer, NULL, 0);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(size_t dataArray[])
{
    size_t data = dataArray[2];
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
            myString = new wchar_t[data];
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
void FUN2(size_t dataArray[])
{
    size_t data = dataArray[2];
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING) && data < 100)
        {
            myString = new wchar_t[data];
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 
