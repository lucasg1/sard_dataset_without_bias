void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    if(5!=5)
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
    data = (char *)realloc(data, 20*sizeof(char));
    if(5==5)
    {
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
    }
}
