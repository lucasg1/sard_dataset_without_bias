void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
    }
}
