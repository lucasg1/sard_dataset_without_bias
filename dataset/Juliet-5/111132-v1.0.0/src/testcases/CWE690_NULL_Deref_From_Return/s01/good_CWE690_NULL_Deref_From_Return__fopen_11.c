void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(globalReturnsFalse())
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
    data = fopen("file.txt", "w+");
    if(globalReturnsTrue())
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
