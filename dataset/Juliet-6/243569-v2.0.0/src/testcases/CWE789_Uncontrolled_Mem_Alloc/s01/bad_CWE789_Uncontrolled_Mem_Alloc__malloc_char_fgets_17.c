void FUN0()
{
    int i,j;
    size_t data;
    data = 0;
    for(i = 0; i < 1; i++)
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
    for(j = 0; j < 1; j++)
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
}
