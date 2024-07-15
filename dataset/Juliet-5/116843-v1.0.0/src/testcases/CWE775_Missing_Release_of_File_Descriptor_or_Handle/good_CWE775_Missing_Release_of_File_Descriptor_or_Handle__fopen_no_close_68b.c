FILE * VAR0;
FILE * VAR1;
void FUN0();
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    VAR1 = data;
    FUN0();
}
extern FILE * VAR0;
extern FILE * VAR1;
void FUN0()
{
    FILE * data = VAR1;
    if (data != NULL)
    {
        fclose(data);
    }
}
