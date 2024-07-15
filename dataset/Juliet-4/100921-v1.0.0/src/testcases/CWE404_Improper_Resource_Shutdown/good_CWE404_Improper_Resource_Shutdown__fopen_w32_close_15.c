void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (data != NULL)
        {
            fclose(data);
        }
        break;
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    switch(6)
    {
    case 6:
        if (data != NULL)
        {
            fclose(data);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
