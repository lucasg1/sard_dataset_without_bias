namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static char * FUN0(char * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer;
        }
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        memcpy(dest, data, 100*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
    ;
}
static char * FUN2(char * data)
{
    if(VAR2)
    {
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer;
        }
    }
    return data;
}
void FUN3()
{
    char * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN2(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        memcpy(dest, data, 100*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
    ;
}
} 
