void FUN0()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    if(0)
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
        strcpy(data, source);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    if(1)
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
}
