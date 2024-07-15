namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    {
        char dest[100*2];
        memset(dest, 'C', 100*2-1); 
        dest[100*2-1] = '\0'; 
<START>
        strcpy(dest, data);
<END>
        printLine(dest);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    VAR1 = data;
    FUN0();
}
} 
