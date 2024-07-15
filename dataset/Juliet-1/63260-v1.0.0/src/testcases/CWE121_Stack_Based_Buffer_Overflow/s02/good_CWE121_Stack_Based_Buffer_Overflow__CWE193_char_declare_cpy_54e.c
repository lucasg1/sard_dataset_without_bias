void FUN0(char * data);
void FUN1()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    data = VAR1;
    data[0] = '\0'; 
    FUN0(data);
}
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN3(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN5(char * data)
{
    FUN7(data);
}
void FUN7(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
}
