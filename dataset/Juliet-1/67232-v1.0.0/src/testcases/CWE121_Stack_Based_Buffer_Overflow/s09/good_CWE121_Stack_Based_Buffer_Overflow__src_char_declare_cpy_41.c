void FUN0(char * data)
{
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN0(data);
}
