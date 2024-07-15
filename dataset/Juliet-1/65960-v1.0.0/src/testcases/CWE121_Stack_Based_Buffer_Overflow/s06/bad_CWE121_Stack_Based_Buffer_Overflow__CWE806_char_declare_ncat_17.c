void FUN0()
{
    int i;
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        strncat(dest, data, strlen(data));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
