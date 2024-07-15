static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    size_t data;
    data = 0;
    if(FUN0())
    {
        fscanf(stdin, "%zu", &data);
    }
    if(FUN1())
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
void FUN3()
{
    size_t data;
    data = 0;
    if(FUN0())
    {
        fscanf(stdin, "%zu", &data);
    }
    if(FUN0())
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
void FUN4()
{
    size_t data;
    data = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    if(FUN0())
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
void FUN5()
{
    size_t data;
    data = 0;
    if(FUN0())
    {
        data = 20;
    }
    if(FUN0())
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
