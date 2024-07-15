int VAR0 = 0;
void FUN0(size_t data);
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(size_t data)
{
    if(VAR0)
    {
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
}
