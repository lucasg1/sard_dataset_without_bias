static int VAR0 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
    {
        char dest[50] = "";
<START>
        strncpy(dest, data, strlen(data));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
