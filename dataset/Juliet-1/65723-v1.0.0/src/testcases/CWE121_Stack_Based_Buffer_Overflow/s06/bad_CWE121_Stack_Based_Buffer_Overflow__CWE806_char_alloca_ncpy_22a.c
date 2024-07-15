extern int VAR0;
char * FUN0(char * data)
{
    if(VAR0)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    return data;
}
int VAR0 = 0;
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
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
