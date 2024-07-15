namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 7;
    {
        int data = dataRef;
        printIntLine(100 / data);
    }
}
void FUN1()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = RAND32();
    {
        int data = dataRef;
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
} 
