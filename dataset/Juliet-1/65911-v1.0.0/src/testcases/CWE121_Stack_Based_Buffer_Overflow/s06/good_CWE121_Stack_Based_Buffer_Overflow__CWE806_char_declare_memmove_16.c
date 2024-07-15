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
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
