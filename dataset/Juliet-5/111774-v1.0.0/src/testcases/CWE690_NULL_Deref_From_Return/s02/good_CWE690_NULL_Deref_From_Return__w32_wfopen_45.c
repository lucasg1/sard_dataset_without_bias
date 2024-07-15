static FILE * VAR0;
static FILE * VAR1;
void FUN0()
{
    FILE * data = VAR1;
    if (data != NULL)
    {
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    VAR1 = data;
    FUN0();
}
