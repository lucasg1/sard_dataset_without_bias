void FUN0()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    if(GLOBAL_CONST_TRUE)
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
