static char * FUN0(char * data)
{
    data = (char *)calloc(20, sizeof(char));
    return data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    data = FUN0(data);
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
