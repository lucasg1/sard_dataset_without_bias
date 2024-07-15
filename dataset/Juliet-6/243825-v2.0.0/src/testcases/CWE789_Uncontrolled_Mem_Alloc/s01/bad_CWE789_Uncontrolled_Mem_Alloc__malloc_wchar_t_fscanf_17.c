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
