void FUN0(FILE * * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    FUN0(&data);
}
void FUN0(FILE * * dataPtr)
{
    FILE * data = *dataPtr;
    if (data != NULL)
    {
        fclose(data);
    }
}
