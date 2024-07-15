namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        delete[] data;
        break;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        delete[] data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        int VAR1[100];
        data = VAR1;
        data[0] = 5;
        printIntLine(data[0]);
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        int VAR1[100];
        data = VAR1;
        data[0] = 5;
        printIntLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
