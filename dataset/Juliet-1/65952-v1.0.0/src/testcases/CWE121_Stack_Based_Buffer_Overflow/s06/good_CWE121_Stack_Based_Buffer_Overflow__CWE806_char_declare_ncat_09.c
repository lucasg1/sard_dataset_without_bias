void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        strncat(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(GLOBAL_CONST_TRUE)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        strncat(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
