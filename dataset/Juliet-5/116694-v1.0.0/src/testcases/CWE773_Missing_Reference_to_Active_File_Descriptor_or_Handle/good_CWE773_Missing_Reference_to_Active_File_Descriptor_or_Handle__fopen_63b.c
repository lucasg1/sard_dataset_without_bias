void FUN0(FILE * * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN0(&data);
}
void FUN0(FILE * * dataPtr)
{
    FILE * data = *dataPtr;
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
