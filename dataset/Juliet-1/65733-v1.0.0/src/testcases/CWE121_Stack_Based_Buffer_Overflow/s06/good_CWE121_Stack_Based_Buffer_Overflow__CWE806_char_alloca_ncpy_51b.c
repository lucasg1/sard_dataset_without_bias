void FUN0(char * data);
void FUN1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN0(data);
}
void FUN0(char * data)
{
    {
        char dest[50] = "";
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
