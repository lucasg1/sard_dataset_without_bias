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
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            strncpy(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
