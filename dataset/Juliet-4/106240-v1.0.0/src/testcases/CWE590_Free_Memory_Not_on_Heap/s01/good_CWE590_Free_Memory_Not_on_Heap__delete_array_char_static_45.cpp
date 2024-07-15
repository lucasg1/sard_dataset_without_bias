namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR2;
    printLine(data);
    delete [] data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
