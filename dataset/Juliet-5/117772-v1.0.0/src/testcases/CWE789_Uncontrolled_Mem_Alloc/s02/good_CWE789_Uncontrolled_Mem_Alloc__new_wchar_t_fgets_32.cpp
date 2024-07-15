namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    size_t *dataPtr1 = &data;
    size_t *dataPtr2 = &data;
    data = 0;
    {
        size_t data = *dataPtr1;
        data = 20;
        *dataPtr1 = data;
    }
    {
        size_t data = *dataPtr2;
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
}
void FUN1()
{
    size_t data;
    size_t *dataPtr1 = &data;
    size_t *dataPtr2 = &data;
    data = 0;
    {
        size_t data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        size_t data = *dataPtr2;
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
} 
