char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    char VAR2[50];
    char VAR3[100];
    memset(VAR2, 'A', 50-1); 
    VAR2[50-1] = '\0'; 
    memset(VAR3, 'A', 100-1); 
    VAR3[100-1] = '\0'; 
    data = VAR3;
    VAR1 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
