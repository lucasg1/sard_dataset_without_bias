void FUN0()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
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
        strncpy(dest, data, strlen(data));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
