void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
void FUN1(char * data);
void FUN4(char * data)
{
    FUN1(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN8()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    FUN4(data);
}
