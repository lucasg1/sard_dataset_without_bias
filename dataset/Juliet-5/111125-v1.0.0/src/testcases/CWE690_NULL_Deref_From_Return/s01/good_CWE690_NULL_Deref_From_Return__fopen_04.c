static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
