void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(globalFive==5)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        SNPRINTF(dest, strlen(data), "%s", data);
<END>
        printLine(data);
    }
}
