namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = 5;
    printIntLine(data);
    {
        int data = dataRef;
        data = 10;
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    int &dataRef = data;
    data = 5;
    {
        int data = dataRef;
        printIntLine(data);
    }
}
} 
