void FUN0(void * dataVoidPtr);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
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
}
