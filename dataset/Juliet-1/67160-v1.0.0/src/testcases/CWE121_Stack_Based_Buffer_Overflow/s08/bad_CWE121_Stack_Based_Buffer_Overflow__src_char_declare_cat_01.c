void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
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
