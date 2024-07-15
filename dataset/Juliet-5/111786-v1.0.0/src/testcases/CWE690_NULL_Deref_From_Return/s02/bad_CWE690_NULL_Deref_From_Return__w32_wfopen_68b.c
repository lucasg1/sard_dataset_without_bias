FILE * VAR0;
FILE * VAR1;
void FUN0();
void FUN1()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    VAR0 = data;
    FUN0();
}
extern FILE * VAR0;
extern FILE * VAR1;
void FUN0()
{
    FILE * data = VAR0;
<START>
    fclose(data);
<END>
}
