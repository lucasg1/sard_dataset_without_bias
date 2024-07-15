namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    while(1)
    {
        {
            int * dataBuffer = new int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
        break;
    }
    printIntLine(*data);
    delete data;
}
} 
