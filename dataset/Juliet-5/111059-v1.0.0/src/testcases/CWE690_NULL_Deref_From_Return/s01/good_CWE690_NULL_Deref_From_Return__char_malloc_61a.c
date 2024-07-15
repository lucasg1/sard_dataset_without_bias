char * FUN0(char * data)
{
    data = (char *)malloc(20*sizeof(char));
    return data;
}
char * FUN0(char * data);
void FUN2()
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
