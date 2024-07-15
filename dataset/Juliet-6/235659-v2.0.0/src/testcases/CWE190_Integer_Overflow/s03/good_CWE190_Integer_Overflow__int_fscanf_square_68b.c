int VAR0;
int VAR1;
int VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    int data;
    data = 0;
    data = 2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    VAR2 = data;
    FUN1();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0()
{
    int data = VAR1;
    {
        int result = data * data;
        printIntLine(result);
    }
}
void FUN1()
{
    int data = VAR2;
    if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
