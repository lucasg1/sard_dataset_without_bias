void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    FUN0(data);
}
void FUN0(char * data)
{
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
