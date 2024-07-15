namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
    printIntLine(data[0]);
}
void FUN2(int * &data)
{
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    delete [] data;
}
void FUN3()
{
    int * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
