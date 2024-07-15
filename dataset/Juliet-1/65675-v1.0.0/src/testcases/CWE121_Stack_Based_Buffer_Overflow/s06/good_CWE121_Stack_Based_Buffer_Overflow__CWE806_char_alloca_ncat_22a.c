extern int VAR0;
extern int VAR1;
char * FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR1)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    {
        char dest[50] = "";
        strncat(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN1(data);
    {
        char dest[50] = "";
        strncat(dest, data, strlen(data));
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
