void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN1(int data);
void FUN5(int data)
{
    FUN1(data);
}
void FUN3(int data);
void FUN7(int data)
{
    FUN3(data);
}
void FUN5(int data);
void FUN9()
{
    int data;
    data = 0;
    data = -2;
    FUN5(data);
}
void FUN7(int data);
void FUN11()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN7(data);
}
void FUN13(int data);
void FUN0(int data)
{
    FUN13(data);
}
void FUN15(int data);
void FUN2(int data)
{
    FUN15(data);
}
void FUN13(int data)
{
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN15(int data)
{
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
