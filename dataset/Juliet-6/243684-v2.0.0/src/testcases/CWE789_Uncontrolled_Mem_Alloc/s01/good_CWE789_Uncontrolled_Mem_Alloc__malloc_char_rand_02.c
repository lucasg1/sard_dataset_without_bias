void FUN0()
{
    size_t data;
    data = 0;
    if(1)
    {
        data = rand();
    }
    if(0)
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
    if(1)
    {
        data = rand();
    }
    if(1)
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
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    if(1)
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
    if(1)
    {
        data = 20;
    }
    if(1)
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
