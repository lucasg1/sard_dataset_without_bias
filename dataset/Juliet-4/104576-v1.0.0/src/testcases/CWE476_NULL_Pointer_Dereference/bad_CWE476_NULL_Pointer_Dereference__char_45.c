static char * VAR0;
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR0;
<START>
    printHexCharLine(data[0]);
<END>
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR0 = data;
    FUN0();
}
