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
    data = _wfopen(L"file.txt", L"w+");
    VAR0 = data;
    FUN0();
}
