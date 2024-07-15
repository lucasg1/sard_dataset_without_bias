static int VAR0 = 0;
void FUN0(size_t data)
{
    if(VAR0)
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
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    VAR0 = 1; 
    FUN0(data);
}
