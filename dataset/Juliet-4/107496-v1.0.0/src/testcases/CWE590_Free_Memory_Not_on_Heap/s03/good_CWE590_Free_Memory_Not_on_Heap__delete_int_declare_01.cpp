namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    printIntLine(*data);
    delete data;
}
} 
