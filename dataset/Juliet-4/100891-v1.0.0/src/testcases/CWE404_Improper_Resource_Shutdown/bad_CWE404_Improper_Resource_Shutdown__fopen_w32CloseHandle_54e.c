void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN2(FILE * data);
void FUN3()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN2(data);
}
void FUN1(FILE * data);
void FUN5(FILE * data)
{
    FUN1(data);
}
void FUN5(FILE * data);
void FUN2(FILE * data)
{
    FUN5(data);
}
void FUN0(FILE * data)
{
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
