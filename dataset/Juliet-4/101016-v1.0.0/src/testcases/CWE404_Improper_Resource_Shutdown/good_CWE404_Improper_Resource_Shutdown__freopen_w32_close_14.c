void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(globalFive==5)
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
