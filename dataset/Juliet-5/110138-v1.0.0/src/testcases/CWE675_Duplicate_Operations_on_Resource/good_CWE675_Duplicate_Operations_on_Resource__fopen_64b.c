void FUN0(void * dataVoidPtr);
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    FILE * * dataPtr = (FILE * *)dataVoidPtr;
    FILE * data = (*dataPtr);
    fclose(data);
}
void FUN2(void * dataVoidPtr)
{
    FILE * * dataPtr = (FILE * *)dataVoidPtr;
    FILE * data = (*dataPtr);
    ; 
}
