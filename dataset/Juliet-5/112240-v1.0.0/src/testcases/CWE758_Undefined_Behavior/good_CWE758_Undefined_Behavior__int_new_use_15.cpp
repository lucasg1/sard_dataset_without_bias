namespace NAMESPACE0
{
void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int data;
        data = 5;
        int * pointer = new int;
        *pointer = data; 
        {
            int data = *pointer;
            printIntLine(data);
        }
        delete pointer;
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int data;
        data = 5;
        int * pointer = new int;
        *pointer = data; 
        {
            int data = *pointer;
            printIntLine(data);
        }
        delete pointer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
