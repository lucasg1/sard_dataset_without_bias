static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        char dest[50] = "";
<START>
        strcat(dest, data);
<END>
        printLine(data);
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    VAR0 = data;
    FUN0();
}
