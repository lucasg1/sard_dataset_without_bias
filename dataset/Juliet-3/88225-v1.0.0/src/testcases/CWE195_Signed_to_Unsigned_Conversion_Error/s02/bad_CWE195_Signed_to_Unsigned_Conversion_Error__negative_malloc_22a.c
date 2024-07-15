extern int VAR0;
int FUN0(int data)
{
    if(VAR0)
    {
        data = -1;
    }
    return data;
}
int VAR0 = 0;
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    VAR0 = 1; 
    data = FUN0(data);
    if (data < 100)
    {
<START>
        char * dataBuffer = (char *)malloc(data);
<END>
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
