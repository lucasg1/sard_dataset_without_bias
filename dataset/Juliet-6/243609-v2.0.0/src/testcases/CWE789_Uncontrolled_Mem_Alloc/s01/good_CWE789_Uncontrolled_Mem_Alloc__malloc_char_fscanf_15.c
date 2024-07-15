void FUN0()
{
    size_t data;
    data = 0;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%zu", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    size_t data;
    data = 0;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%zu", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    size_t data;
    data = 0;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 20;
        break;
    }
    switch(7)
    {
    case 7:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    size_t data;
    data = 0;
    switch(6)
    {
    case 6:
        data = 20;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
