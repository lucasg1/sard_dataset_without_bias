int VAR0 = 0;
void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(FILE * data)
{
    if(VAR0)
    {
<START>
        fclose(data);
<END>
    }
}
