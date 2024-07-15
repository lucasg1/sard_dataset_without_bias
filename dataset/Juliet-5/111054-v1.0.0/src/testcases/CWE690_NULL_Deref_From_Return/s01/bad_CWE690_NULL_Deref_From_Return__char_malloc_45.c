static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    VAR0 = data;
    FUN0();
}
