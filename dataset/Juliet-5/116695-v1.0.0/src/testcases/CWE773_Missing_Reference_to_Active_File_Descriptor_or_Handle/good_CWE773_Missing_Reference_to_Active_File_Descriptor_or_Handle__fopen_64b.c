void FUN0(void * dataVoidPtr);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    FILE * * dataPtr = (FILE * *)dataVoidPtr;
    FILE * data = (*dataPtr);
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
