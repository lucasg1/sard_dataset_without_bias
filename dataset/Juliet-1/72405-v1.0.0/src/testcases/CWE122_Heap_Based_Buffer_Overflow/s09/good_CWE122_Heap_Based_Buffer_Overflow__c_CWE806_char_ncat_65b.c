void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    funcPtr(data);
}
void FUN0(char * data)
{
    {
        char dest[50] = "";
        strncat(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
