static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = '\0'; 
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR2[50];
    char VAR3[100];
<START>
    data = VAR2;
<END>
    data[0] = '\0'; 
    VAR0 = data;
    FUN0();
}
