void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN0(data);
}
void FUN3(FILE * data);
void FUN0(FILE * data)
{
    FUN3(data);
}
void FUN5(FILE * data);
void FUN3(FILE * data)
{
    FUN5(data);
}
void FUN5(FILE * data)
{
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
