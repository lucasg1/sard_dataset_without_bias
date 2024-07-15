static int VAR0 = 0;
static int VAR1 = 0;
void FUN0(FILE * data)
{
    if(VAR0)
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
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(FILE * data)
{
    if(VAR1)
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
    VAR1 = 1; 
    FUN2(data);
}
