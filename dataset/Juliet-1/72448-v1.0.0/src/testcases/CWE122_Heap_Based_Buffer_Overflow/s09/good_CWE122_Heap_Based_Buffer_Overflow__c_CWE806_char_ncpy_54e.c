void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN2(data);
}
void FUN1(char * data);
void FUN6(char * data)
{
    FUN1(data);
}
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
void FUN0(char * data)
{
    {
        char dest[50] = "";
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
