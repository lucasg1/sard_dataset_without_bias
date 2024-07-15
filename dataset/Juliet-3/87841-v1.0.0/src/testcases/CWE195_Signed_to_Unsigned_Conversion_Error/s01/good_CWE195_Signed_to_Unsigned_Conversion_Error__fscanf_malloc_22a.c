extern int VAR0;
extern int VAR1;
int FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 100-1;
    }
    return data;
}
int FUN1(int data)
{
    if(VAR1)
    {
        data = 100-1;
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
    if (data < 100)
    {
        char * dataBuffer = (char *)malloc(data);
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    VAR1 = 1; 
    data = FUN1(data);
    if (data < 100)
    {
        char * dataBuffer = (char *)malloc(data);
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
