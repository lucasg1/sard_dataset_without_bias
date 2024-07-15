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
        {
            char * dataBuffer = (char *)malloc(100*sizeof(char));
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer;
        }
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR1)
    {
        {
            char * dataBuffer = (char *)malloc(100*sizeof(char));
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer;
        }
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        strncpy(dest, data, strlen(dest));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN1(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        strncpy(dest, data, strlen(dest));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
