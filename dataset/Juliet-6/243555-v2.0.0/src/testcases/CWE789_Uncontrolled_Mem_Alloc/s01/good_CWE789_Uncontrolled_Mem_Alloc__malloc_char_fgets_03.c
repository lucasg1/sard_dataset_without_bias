void FUN0()
{
    size_t data;
    data = 0;
    if(5==5)
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
    if(5!=5)
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    size_t data;
    data = 0;
    if(5==5)
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
    if(5==5)
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
void FUN2()
{
    size_t data;
    data = 0;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    if(5==5)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
                myString = (char *)malloc(data*sizeof(char));
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
void FUN3()
{
    size_t data;
    data = 0;
    if(5==5)
    {
        data = 20;
    }
    if(5==5)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
                myString = (char *)malloc(data*sizeof(char));
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
