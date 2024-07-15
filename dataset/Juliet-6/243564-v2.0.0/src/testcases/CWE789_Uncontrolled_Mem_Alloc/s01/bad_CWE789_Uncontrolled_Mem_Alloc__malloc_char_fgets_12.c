void FUN0()
{
    size_t data;
    data = 0;
    if(globalReturnsTrueOrFalse())
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
    }
    else
    {
        data = 20;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
<START>
                myString = (char *)malloc(data*sizeof(char));
<END>
                if (myString == NULL) {exit(-1);}
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string");
            }
        }
    }
    else
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING) && data < 100)
            {
                myString = (char *)malloc(data*sizeof(char));
                if (myString == NULL) {exit(-1);}
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
