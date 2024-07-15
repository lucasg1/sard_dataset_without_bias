void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
