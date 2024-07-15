static FILE * VAR0;
static FILE * VAR1;
static FILE * VAR2;
void FUN0()
{
    FILE * data = VAR0;
<START>
    fclose(data);
<END>
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    VAR0 = data;
    FUN0();
}
