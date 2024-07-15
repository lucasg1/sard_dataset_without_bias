namespace NAMESPACE0
{
void FUN0()
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
