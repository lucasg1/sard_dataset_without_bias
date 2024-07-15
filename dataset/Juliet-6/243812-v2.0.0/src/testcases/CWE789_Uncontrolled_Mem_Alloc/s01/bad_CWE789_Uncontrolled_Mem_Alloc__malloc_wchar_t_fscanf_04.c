static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    size_t data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(STATIC_CONST_TRUE)
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
