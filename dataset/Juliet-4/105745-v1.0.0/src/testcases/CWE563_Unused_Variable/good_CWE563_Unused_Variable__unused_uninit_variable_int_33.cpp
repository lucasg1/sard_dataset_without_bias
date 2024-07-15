namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    ; 
    {
        int data = dataRef;
        data = 5;
        printIntLine(data);
    }
}
} 
