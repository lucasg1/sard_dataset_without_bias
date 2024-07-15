namespace NAMESPACE0
{
void FUN0(int * data)
{
    printIntLine(*data);
    delete data;
}
void FUN1()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
