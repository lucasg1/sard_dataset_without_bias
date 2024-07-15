void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    FUN0(data);
}
void FUN3(FILE * data);
void FUN4(FILE * data)
{
    FUN3(data);
}
void FUN4(FILE * data);
void FUN0(FILE * data)
{
    FUN4(data);
}
void FUN3(FILE * data)
{
    if (data != NULL)
    {
        fclose(data);
    }
}
