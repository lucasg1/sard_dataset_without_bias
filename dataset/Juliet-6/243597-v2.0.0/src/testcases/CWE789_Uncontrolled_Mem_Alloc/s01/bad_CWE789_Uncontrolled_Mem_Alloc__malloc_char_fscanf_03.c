void FUN0()
{
    size_t data;
    data = 0;
    if(5==5)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(5==5)
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
