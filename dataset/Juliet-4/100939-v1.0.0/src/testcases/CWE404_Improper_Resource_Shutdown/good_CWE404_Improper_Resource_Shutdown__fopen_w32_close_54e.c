void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN2(FILE * data);
void FUN3(FILE * data)
{
    FUN2(data);
}
void FUN3(FILE * data);
void FUN0(FILE * data)
{
    FUN3(data);
}
void FUN1(FILE * data);
void FUN7()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN1(data);
}
void FUN2(FILE * data)
{
    if (data != NULL)
    {
        fclose(data);
    }
}
