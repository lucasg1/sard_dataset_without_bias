void FUN0()
{
    char * data;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    if(GLOBAL_CONST_FIVE==5)
    {
        data = dataBuffer - 8;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, 100*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}