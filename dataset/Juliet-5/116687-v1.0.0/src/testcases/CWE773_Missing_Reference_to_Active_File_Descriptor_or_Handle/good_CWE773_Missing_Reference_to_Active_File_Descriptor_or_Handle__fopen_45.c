static FILE * VAR0;
static FILE * VAR1;
void FUN0()
{
    FILE * data = VAR1;
    if (data != NULL)
    {
        fclose(data);
    }
    data = fopen("GoodSink_fopen.txt", "w+");
    if (data != NULL)
    {
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    VAR1 = data;
    FUN0();
}
