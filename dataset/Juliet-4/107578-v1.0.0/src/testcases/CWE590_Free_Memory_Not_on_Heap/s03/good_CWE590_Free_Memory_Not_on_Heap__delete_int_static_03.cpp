namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN1()
{
    int * data;
    data = NULL; 
    if(5==5)
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
