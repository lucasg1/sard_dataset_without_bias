namespace NAMESPACE0
{
void FUN0()
{
    int h;
    int * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            int * dataBuffer = new int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    printIntLine(*data);
    delete data;
}
} 
