void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        free(data);
    }
}
