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
    data = _wfopen(L"file.txt", L"w+");
    FUN2(data);
}
void FUN1(FILE * data);
void FUN2(FILE * data)
{
    FUN1(data);
}
void FUN7(FILE * data);
void FUN0(FILE * data)
{
    FUN7(data);
}
void FUN7(FILE * data)
{
    if (data != NULL)
    {
        fclose(data);
    }
}
