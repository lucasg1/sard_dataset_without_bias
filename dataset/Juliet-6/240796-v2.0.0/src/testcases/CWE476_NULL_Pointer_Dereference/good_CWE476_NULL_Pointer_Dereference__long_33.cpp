namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long tmpData = 5L;
    long * &dataRef = data;
    {
        data = &tmpData;
    }
    {
        long * data = dataRef;
        printLongLine(*data);
    }
}
void FUN1()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    {
        long * data = dataRef;
        if (data != NULL)
        {
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
} 
