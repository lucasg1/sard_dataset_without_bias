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
    char * data;
    data = NULL;
    if(FUN0())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    if(FUN0())
    {
        free(data);
    }
}
void FUN4()
{
    char * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN5()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
    }
    if(FUN0())
    {
        ; 
    }
}
