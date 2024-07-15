void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    if(globalReturnsTrueOrFalse())
    {
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
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
