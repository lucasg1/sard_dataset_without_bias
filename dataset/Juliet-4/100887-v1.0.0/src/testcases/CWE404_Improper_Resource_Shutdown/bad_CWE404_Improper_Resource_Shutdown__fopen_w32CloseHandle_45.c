static FILE * VAR0;
static FILE * VAR1;
void FUN0()
{
    FILE * data = VAR0;
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    VAR0 = data;
    FUN0();
}
