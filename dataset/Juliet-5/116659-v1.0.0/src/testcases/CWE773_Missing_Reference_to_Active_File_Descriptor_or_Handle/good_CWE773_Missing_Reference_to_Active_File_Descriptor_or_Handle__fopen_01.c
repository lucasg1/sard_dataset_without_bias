void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
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
