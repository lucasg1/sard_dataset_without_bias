void FUN0()
{
    char * data;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    goto source;
source:
    data = dataBuffer - 8;
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        strncpy(dest, data, strlen(dest));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}
