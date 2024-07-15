void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    while(1)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
        break;
    }
    {
        char dest[50] = "";
<START>
        memcpy(dest, data, strlen(data)*sizeof(char));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
