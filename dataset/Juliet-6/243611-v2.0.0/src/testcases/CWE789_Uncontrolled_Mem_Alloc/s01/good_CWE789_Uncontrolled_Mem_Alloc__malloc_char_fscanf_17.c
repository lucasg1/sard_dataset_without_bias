void FUN0()
{
    int i,k;
    size_t data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%zu", &data);
    }
    for(k = 0; k < 1; k++)
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
    int h,j;
    size_t data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = 20;
    }
    for(j = 0; j < 1; j++)
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
