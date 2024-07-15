void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    while(1)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
        break;
    }
    {
        char dest[50] = "";
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
