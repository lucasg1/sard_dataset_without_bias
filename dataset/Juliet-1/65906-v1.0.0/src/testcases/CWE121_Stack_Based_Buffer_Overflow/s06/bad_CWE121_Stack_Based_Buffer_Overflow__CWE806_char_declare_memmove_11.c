void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrue())
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        memmove(dest, data, strlen(data)*sizeof(char));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
