void FUN0(char * data);
void FUN1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer;
    FUN0(data);
}
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN6(char * data);
void FUN3(char * data)
{
    FUN6(data);
}
void FUN5(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strncpy(data, source, 100-1);
        data[100-1] = '\0';
        printLine(data);
    }
}
