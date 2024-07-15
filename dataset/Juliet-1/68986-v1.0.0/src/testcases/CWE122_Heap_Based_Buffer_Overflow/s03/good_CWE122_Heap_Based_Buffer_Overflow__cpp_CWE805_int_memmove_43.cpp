namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[100];
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
