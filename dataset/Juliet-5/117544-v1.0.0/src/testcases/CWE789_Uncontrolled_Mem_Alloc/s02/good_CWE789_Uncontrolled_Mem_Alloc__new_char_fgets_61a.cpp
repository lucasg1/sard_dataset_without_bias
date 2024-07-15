namespace NAMESPACE0
{
size_t FUN0(size_t data)
{
    data = 20;
    return data;
}
size_t FUN1(size_t data)
{
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
    return data;
}
} 
namespace NAMESPACE0
{
size_t FUN0(size_t data);
void FUN3()
{
    size_t data;
    data = 0;
    data = FUN0(data);
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = new char[data];
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
size_t FUN1(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    data = FUN1(data);
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = new char[data];
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 
