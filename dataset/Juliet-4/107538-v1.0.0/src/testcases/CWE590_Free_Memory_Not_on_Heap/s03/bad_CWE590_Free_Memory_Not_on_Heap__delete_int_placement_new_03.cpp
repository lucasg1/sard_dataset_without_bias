namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    if(5==5)
    {
        {
            char buffer[sizeof(int)];
            int * dataBuffer = new(buffer) int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
