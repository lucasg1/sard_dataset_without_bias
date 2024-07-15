void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    {
        char dest[50] = "";
<START>
        strcat(dest, data);
<END>
        printLine(data);
    }
}
