void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
    }
}
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    if(globalReturnsTrue())
    {
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
    }
}
