void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN1(data);
}
void FUN0(char * data)
{
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
    }
}
