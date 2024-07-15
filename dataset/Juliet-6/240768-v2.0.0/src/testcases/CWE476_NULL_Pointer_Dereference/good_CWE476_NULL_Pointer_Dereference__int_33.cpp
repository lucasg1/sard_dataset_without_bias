namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int tmpData = 5;
    int * &dataRef = data;
    {
        data = &tmpData;
    }
    {
        int * data = dataRef;
        printIntLine(*data);
    }
}
void FUN1()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    {
        int * data = dataRef;
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
} 
