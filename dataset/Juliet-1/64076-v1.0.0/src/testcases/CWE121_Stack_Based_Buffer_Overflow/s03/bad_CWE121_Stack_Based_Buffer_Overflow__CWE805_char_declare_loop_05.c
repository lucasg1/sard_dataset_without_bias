static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    if(staticTrue)
    {
        data = VAR0;
        data[0] = '\0'; 
    }
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
