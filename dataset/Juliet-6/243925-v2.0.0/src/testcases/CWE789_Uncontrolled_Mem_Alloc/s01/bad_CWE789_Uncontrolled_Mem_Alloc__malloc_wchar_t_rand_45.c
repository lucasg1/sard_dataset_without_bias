static size_t VAR0;
static size_t VAR1;
static size_t VAR2;
void FUN0()
{
    size_t data = VAR0;
    {
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
<START>
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
<END>
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
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    VAR0 = data;
    FUN0();
}
