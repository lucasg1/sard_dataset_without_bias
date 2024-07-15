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
void FUN4(FILE * data);
void FUN2(FILE * data)
{
    FUN4(data);
}
void FUN1(FILE * data);
void FUN7()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN1(data);
}
void FUN4(FILE * data)
{
    if (data != NULL)
    {
        fclose(data);
    }
}
