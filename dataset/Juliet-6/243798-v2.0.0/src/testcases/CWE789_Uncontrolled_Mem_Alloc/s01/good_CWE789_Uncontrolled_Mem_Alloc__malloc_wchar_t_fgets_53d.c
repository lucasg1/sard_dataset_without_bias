void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
void FUN2(size_t data);
void FUN3(size_t data)
{
    FUN2(data);
}
void FUN1(size_t data);
void FUN5(size_t data)
{
    FUN1(data);
}
void FUN3(size_t data);
void FUN7(size_t data)
{
    FUN3(data);
}
void FUN5(size_t data);
void FUN9()
{
    size_t data;
    data = 0;
    data = 20;
    FUN5(data);
}
void FUN7(size_t data);
void FUN11()
{
    size_t data;
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
    FUN7(data);
}
void FUN0(size_t data)
{
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
void FUN2(size_t data)
{
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING) && data < 100)
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
