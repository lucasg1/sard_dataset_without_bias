static char * VAR0;
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR0;
<START>
    free(data);
<END>
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = data;
    FUN0();
}
