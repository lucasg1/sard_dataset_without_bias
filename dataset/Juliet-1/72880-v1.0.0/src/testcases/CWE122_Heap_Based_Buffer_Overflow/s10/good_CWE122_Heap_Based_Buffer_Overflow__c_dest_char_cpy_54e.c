void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0'; 
    FUN0(data);
}
void FUN3(char * data);
void FUN4(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
void FUN4(char * data);
void FUN5(char * data)
{
    FUN4(data);
}
void FUN3(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
        free(data);
    }
}
