void FUN0()
{
    size_t data;
    data = 0;
    while(1)
    {
        data = rand();
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    size_t data;
    data = 0;
    while(1)
    {
        data = 20;
        break;
    }
    while(1)
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
        break;
    }
}
