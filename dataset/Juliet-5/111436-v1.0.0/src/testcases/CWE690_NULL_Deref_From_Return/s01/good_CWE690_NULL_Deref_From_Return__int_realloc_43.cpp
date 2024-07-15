namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)realloc(data, 1*sizeof(int));
}
void FUN1()
{
    int * data;
    data = NULL; 
    FUN0(data);
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
} 
