static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    if(staticTrue)
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}
