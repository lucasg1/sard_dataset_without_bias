static int VAR0 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        {
            char * dataBuffer = (char *)malloc(100*sizeof(char));
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer - 8;
        }
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
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
