void FUN0(char * data);
void FUN1()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    data = VAR0;
    data[0] = '\0'; 
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN2(char * data)
{
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = '\0'; 
        printLine(data);
    }
}
