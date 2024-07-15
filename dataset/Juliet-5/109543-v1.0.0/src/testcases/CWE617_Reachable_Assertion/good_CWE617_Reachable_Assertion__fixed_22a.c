extern int VAR0;
extern int VAR1;
int FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = ASSERT_VALUE+1;
    }
    return data;
}
int FUN1(int data)
{
    if(VAR1)
    {
        data = ASSERT_VALUE+1;
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
    assert(data > ASSERT_VALUE);
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    VAR1 = 1; 
    data = FUN1(data);
    assert(data > ASSERT_VALUE);
}
