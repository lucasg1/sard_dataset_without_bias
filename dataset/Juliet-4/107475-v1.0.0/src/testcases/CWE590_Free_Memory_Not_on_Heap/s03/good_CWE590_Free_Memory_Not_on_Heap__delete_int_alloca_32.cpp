namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL; 
    {
        int * data = *dataPtr1;
        {
            int * dataBuffer = new int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        printIntLine(*data);
        delete data;
    }
}
} 
