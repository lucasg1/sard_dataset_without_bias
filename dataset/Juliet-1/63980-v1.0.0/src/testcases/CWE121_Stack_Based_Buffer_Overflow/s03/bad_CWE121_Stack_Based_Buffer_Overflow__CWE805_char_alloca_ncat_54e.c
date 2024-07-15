void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
void FUN5(char * data);
void FUN7()
{
    char * data;
    char * VAR0 = (char *)ALLOCA(50*sizeof(char));
    char * VAR1 = (char *)ALLOCA(100*sizeof(char));
    data = VAR0;
    data[0] = '\0'; 
    FUN5(data);
}
void FUN2(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncat(data, source, 100);
<END>
        printLine(data);
    }
}
