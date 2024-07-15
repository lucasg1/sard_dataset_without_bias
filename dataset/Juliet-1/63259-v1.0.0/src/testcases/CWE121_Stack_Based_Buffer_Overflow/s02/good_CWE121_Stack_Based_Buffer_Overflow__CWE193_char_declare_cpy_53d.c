void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN5()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    data = VAR1;
    data[0] = '\0'; 
    FUN3(data);
}
void FUN0(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
}
