void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
