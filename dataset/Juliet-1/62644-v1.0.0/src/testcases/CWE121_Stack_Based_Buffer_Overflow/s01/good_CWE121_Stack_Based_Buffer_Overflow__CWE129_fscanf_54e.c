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
void FUN8(int data);
void FUN0(int data)
{
    FUN8(data);
}
void FUN10(int data);
void FUN2(int data)
{
    FUN10(data);
}
void FUN5(int data);
void FUN13()
{
    int data;
    data = -1;
    data = 7;
    FUN5(data);
}
void FUN7(int data);
void FUN15()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN7(data);
}
void FUN8(int data)
{
    {
        int i;
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}
void FUN10(int data)
{
    {
        int i;
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
