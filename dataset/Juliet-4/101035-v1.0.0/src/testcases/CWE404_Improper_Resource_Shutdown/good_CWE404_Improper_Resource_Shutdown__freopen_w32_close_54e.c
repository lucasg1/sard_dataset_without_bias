void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN2(FILE * data);
void FUN0(FILE * data)
{
    FUN2(data);
}
void FUN1(FILE * data);
void FUN5()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    FUN1(data);
}
void FUN7(FILE * data);
void FUN2(FILE * data)
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
