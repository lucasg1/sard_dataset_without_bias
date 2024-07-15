char * FUN0(char * data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    data = FUN0(data);
    {
        char dest[50] = "";
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
