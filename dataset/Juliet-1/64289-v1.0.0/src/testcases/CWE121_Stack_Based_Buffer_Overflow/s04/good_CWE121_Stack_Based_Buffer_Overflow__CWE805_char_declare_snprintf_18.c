void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    goto source;
source:
    data = VAR1;
    data[0] = '\0'; 
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        SNPRINTF(data, 100, "%s", source);
        printLine(data);
    }
}
void FUN1()
{
    FUN0();
}
