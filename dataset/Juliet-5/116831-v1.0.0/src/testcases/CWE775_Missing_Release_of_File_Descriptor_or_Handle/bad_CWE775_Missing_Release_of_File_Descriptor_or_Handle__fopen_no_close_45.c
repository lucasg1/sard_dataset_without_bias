static FILE * VAR0;
static FILE * VAR1;
void FUN0()
{
    FILE * data = VAR0;
<START>
<END>
    ; 
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    VAR0 = data;
    FUN0();
}
