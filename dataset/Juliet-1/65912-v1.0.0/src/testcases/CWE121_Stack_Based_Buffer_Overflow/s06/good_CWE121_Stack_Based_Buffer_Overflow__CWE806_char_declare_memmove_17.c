void FUN0()
{
    int h;
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
