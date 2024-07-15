int VAR0;
int VAR1;
void FUN0();
void FUN1()
{
    int data;
    data = -1;
    data = ASSERT_VALUE+1;
    VAR1 = data;
    FUN0();
}
extern int VAR0;
extern int VAR1;
void FUN0()
{
    int data = VAR1;
    assert(data > ASSERT_VALUE);
}
