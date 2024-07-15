static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(FUN1())
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
void FUN3()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(FUN0())
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
