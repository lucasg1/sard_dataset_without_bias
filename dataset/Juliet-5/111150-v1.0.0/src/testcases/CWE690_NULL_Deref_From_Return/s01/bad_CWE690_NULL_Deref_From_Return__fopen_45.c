static FILE * VAR0;
static FILE * VAR1;
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
    data = fopen("file.txt", "w+");
    VAR0 = data;
    FUN0();
}
