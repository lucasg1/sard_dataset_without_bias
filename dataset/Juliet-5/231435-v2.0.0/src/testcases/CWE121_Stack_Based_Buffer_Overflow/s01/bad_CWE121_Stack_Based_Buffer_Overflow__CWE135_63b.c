void FUN0(void * * dataPtr);
void FUN1()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN0(&data);
}
